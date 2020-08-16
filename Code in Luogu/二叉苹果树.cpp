#include <bits/stdc++.h>
using namespace std;
const int maxn=110;
int tot=0,G[maxn][maxn],a[maxn],l[maxn],r[maxn];
int dp[maxn][maxn];
int n,q;
inline void build(int x)
{
    for(int i=1;i<=n;i++)
    {
        if(G[i][x]>=0)
        {
            l[x]=i;
            a[i]=G[x][i];
            G[i][x]=-1;
            G[x][i]=-1;
            build(i);
            break;
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(G[i][x]>=0)
        {
            r[x]=i;
            a[i]=G[x][i];
            G[i][x]=-1;
            G[x][i]=-1;
            build(i);
            break;
        }
    }
}
inline int dfs(int x,int y)
{
    if(y==0) return 0;
    if(l[x]==0 && r[x]==0) return a[x];
    if(dp[x][y]>0) return dp[x][y];
    for(int i=0;i<y;i++)
    {
        dp[x][y]=max(dp[x][y],dfs(l[x],i)+dfs(r[x],y-i-1)+a[x]);
    }
    return dp[x][y];
}
int main()
{
    scanf("%d%d",&n,&q);
    q++;
    memset(G,-1,sizeof(G));
    for(int i=1;i<n;i++)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        G[a][b]=c;
        G[b][a]=c;
    }
    build(1);
    printf("%d\n",dfs(1,q));
    return 0;
}