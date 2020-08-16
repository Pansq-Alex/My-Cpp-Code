#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[101],dp[101][101];
int main(void) {
	dp[0][0]=1;
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
    for(int i=1;i<=n;i++)
       for(int j=0;j<=m;j++)
           for(int k=0;k<=min(j,a[i]);k++)
              dp[i][j]=(dp[i][j]+dp[i-1][j-k])%1000007;
   	printf("%d\n",dp[n][m]);
} 
