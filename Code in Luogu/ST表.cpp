#include <bits/stdc++.h>
using namespace std;
inline int read()
{
	int x=0,f=1;char ch=getchar();
	while (!isdigit(ch)){if (ch=='-') f=-1;ch=getchar();}
	while (isdigit(ch)){x=x*10+ch-48;ch=getchar();}
	return x*f;
}
int n,m; 
int a[100001],f[100001][31];
void RMQ()
{
	for(int i=1;i<=n;i++)
		f[i][0]=a[i];
	for(int j=1;j<31;j++)
		for(int i=1;i+(1<<j)-1<=n;i++)
			f[i][j]=max(f[i][j-1],f[i+(1<<(j-1))][j-1]);
}
int search(int L,int R)
{
	int t=log2(R-L+1);
	return max(f[L][t],f[R-(1<<t)+1][t]);
}
int main()
{
	n=read(),m=read();
	for(int i=1;i<=n;i++)
		a[i]=read();
	RMQ();
	for(int i=1;i<=m;i++)
	{
		int L=read(),R=read();
		printf("%d\n",search(L,R));
	}
	return 0;
}

