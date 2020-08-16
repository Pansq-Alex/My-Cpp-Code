#include <bits/stdc++.h>
using namespace std;
int n,vis[1000001]={},ans=0,v[1000001]={},x[1000001]={},tot=0,i=0;
int main()
{
	cin>>n;
	while(n--)
	{
		int t,k;
		cin>>t>>k;
		while(k--)
		{
			v[++tot]=t;
			cin>>x[tot];
			if(!vis[x[tot]])
				ans++;
			vis[x[tot]]++;
		}
		while(t-v[i]>=86400)
            if(!--vis[x[i++]])
				ans--;
		cout<<ans<<endl;
	}
	return 0;
}

