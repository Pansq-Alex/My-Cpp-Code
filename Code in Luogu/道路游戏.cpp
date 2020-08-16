#include <bits/stdc++.h>
using namespace std;
int n,m,p;
int mo[1001][1001];
int cost[1001],dp[1001];
int main()
{
	cin>>n>>m>>p;
	memset(dp,-999999,sizeof(dp));
	dp[0]=0;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			cin>>mo[i][j];
	for(int i=1;i<=n;i++)
		cin>>cost[i];
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)
		{
			int sum=j-1;
			if(!sum)
				sum=n;
			int pick=mo[sum][i];
			for(int k=1;k<=p && k<=i;k++)
			{
				dp[i]=max(dp[i],dp[i-k]+pick-cost[sum]);
				if(sum==1)
					sum=n;
				else
					sum--;
				pick+=mo[sum][i-k];
			}	
		}
	cout<<dp[m];
	return 0;
}

