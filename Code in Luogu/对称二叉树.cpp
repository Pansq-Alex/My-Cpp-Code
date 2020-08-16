#include <bits/stdc++.h>
#define N 10000001
using namespace std;
int n,book[N]={},v[N]={},tree[N]={};
bool dfs(int L,int R)
{
	if(L==-1 && R==-1)
		return true;
	if(L!=-1 && R!=-1 && v[L]==v[R] && dfs(tree[L*2],tree[R*2+1]) && dfs(tree[L*2+1],tree[R*2]))
		return true;
	return false;
}
void cnt(int i)
{
	book[i]=1;
	if(tree[i*2]!=-1)
		cnt(tree[i*2]),
		book[i]+=book[tree[i*2]];
	if(tree[i*2+1]!=-1)
		cnt(tree[i*2+1]),
		book[i]+=book[tree[i*2+1]];
}
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&v[i]);
	tree[1]=1;
	for(int i=1;i<=n;i++) 
	{
		scanf("%d",&tree[i*2]);
		scanf("%d",&tree[i*2+1]);
	}
	cnt(1);
	int count=0;
	for (int i=1;i<=n;i++)
		if (dfs(tree[i*2],tree[i*2+1]))
			count=max(count,book[i]);
	printf("%d\n",count);
	return 0;
}