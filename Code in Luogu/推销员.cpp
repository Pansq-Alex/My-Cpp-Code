#include <bits/stdc++.h>
#define N 100001
using namespace std;
struct node
{
	int s,a;
}p[N];
inline bool cmp(node x,node y)
{
	return x.a>y.a;
}
int n,sum[N],l[N],r[N];
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>p[i].s;
	for(int i=1;i<=n;i++)
		cin>>p[i].a;
	sort(p+1,p+1+n,cmp);
	for(int i=1;i<=n;i++)
		sum[i]=sum[i-1]+p[i].a;
	for(int i=1;i<=n;i++)
		l[i]=max(l[i-1],2*p[i].s);
	for(int i=n;i>=1;i--)
		r[i]=max(r[i+1],2*p[i].s+p[i].a);
	for(int i=1;i<=n;i++)
		cout<<max(sum[i]+l[i],sum[i-1]+r[i])<<endl;
	return 0;
}