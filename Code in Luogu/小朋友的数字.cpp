#include <bits/stdc++.h>
#define N 1000001
#define ll long long 
using namespace std;
ll n,p;
ll ans=LONG_LONG_MIN,maxn=LONG_LONG_MIN;
ll zdh[N],fs[N],tzz[N];
int main(void) {
	scanf("%lld %lld",&n,&p);
	for(ll i=1;i<=n;i++) {
		ll t;
		scanf("%lld",&t);
		zdh[i]=max(t,zdh[i-1]+t);
		maxn=max(zdh[i],maxn);
		tzz[i]=maxn%p;
	}
	ans=fs[1]=tzz[1];
	maxn=LONG_LONG_MIN;
	for(ll i=2;i<=n;i++) {
		maxn=max(maxn,tzz[i-1]+fs[i-1]);
		fs[i]=maxn;
		ans=max(ans,maxn)%p;
	}
	cout<<ans<<endl;
	return 0;
}

