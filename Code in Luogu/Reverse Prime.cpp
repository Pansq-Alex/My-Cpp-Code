#include <bits/stdc++.h>
#define N 1000001   //宏定义一个最大值
#define ll long long    //宏定义ll为long long (懒~）
using namespace std;    //命名空间
bool is_prime[N];   //is_prime[i]表示的是i是否为质数，true则是，false则不是
int prime[N],tot=0,a[N],fac[N];  //prime存贮质数，tot存储质数有多少，a[i]记录了prime[i]的反向质数，fac[i]存储的是i的质因数的个数
ll c1[N],c2[N]; //这里要定义两个树状数组，一个树状数组c1记录i在树状数组中的位置，而另一个c2记录了从第一个位置到当前位置有多少个反向质数
map<int,int>m;  //为了能够离散化，我使用了map
void Euler_prime()   //欧拉筛
{

	memset(is_prime,true,sizeof(is_prime));     
	is_prime[1]=false;
	for(int i=2;i<N;i++)
	{
		if(is_prime[i]) prime[++tot]=i;
		for(int j=1;j<=tot;j++)
		{
			if(prime[j]*i>N)
				break;
			is_prime[prime[j]*i]=false;
			if(i%prime[j]==0)   
				break;
		}
	}
}
int solve(int num)  //实现了num数的反向
{
    int len=0,ret=0,bit[20];
    while(num)  
    {
        bit[len++]=num%10;
        num/=10;
    }
    for(int i=0;i<len;i++)
    {
        ret=ret*10+bit[i];
    }       //本函数到这里实现了res=num的反向数
    while(ret<100000) ret*=10;  //因为求出来的数不一定是6位数，所以要加上这行代码
    return ret;
}
void init() //初始化函数
{
    Euler_prime();   //先筛了吧……
    for(int i=1;i<=tot;i++)
        a[i]=solve(prime[i]);   //a[i]表示第prime[i]个数的反向质数
    sort(a+1,a+1+tot);  //此题需要排序，才能在后面的二分中查询
    for(int i=1;i<=tot;i++)
        m[a[i]]=i;  //将离散化
/*以下函数部分实现了求i的质因数*/
    for(int i=1;i<=tot;i++) 
    {
        fac[i]=2;
        int tmp=a[i];
        for(int j=1;j<=tot&&prime[j]*prime[j]<=tmp;j++) 
        {
            while(tmp%prime[j]==0)
            {
                tmp/=prime[j];
                fac[i]++;
            }
        }
        if(tmp>1) fac[i]++; //在特殊情况下，要加一个
    }
}
/**********以下是树状数组基本函数**********/
int lowbit(int k)   //神奇的lowbit函数
{
    return k&-k;
}
void add1(int x,int v)  //
{
    for(int i=x;i<N;i+=lowbit(i))
        c1[i]+=v;
}
void add2(int x,int v)  //
{
    for(int i=x;i<N;i+=lowbit(i))
        c2[i]+=v;
}
ll getsum1(int x)   //
{
    ll ans=0;
    for(int i=x;i>0;i-=lowbit(i))
        ans+=c1[i];
    return ans;
}
ll getsum2(int x)   //
{
    ll ans=0;
    for(int i=x;i>0;i-=lowbit(i))   
        ans+=c2[i];
    return ans;
}
/**********以上是树状数组基本函数**********/
int main()
{
    init(); //初始化......
	char op[2]; //因为一个字符的输入总是有问题，所以就定义字符串啦
    int k;
    for(int i=1;i<=tot;i++)
    {
        add1(i,1);  //存在则压入数字1
        add2(i,fac[i]); //当前位置有多少个反向质数
    }
    while(scanf("%s%d",op,&k)!=EOF) //输入
    {
        if(op[0]=='q')  //既然要输出0~i的所有反向质数，那么我们需要将它先在树状数组中找出来，才好输出总和
        {
            k++;    //因为本人习惯于从1开始，而此题从0开始，只得k++
            int l=1,r=tot,mid;  //既然我们要将这个数在树状数组中找出，那么我们用二分是个不错的选择！
            while(l<=r)
            {
                mid=(l+r)/2;    //用mid变量来搜出k的位置
                ll tmp=getsum1(mid);        //记录一下mid的位置
                if(tmp==k)  //搜出来了就break
                    break;
                else if(tmp<k)  //如果当前的比k小，说明当前数左边的数也肯定也比k小，所以往右找
                    l=mid+1;
                else    //否则如果当前的比k大，说明当前数右边的数也肯定也比k大，所以往左找
                    r=mid-1;
            }
            printf("%lld\n",getsum2(mid));  //最后输出总和就好啦！
        }
        if(op[0]=='d')  
        {
            add1(m[k/10],-1);   //不存在了就减去1，（就是把它删了）
            add2(m[k/10],-fac[m[k/10]]);    //将这个数从第一个位置到当前位置有多少个反向质数表为0（也是把它删了^_^）
        }
    }
	return 0;
}
/*
    这么长的代码终于打完了，呼——
    来总结一下：
    - 看到质数，数量众多，首先想质数筛（推荐欧拉筛）
    - 在资料一对一映射时，为了省时间省财富，我推荐STL的map
    - 做题时，要找出树状数组的基本模型，判断树状数组维护什么，需要几个维护
    - 在查找时，要学会使用二分，事半功倍
    （其实主要还是树状数组，只不过加了一个质数筛，二分和一些操作而已）
    至于第127和128行为什么k要除以10，我还是没有想到╮(╯▽╰)╭如果你知道的话，请在下方留言中告诉我
    记得点赞！
*/