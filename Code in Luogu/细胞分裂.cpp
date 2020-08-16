#include <bits/stdc++.h>
using namespace std;
int n,m1,m2;
int a[30003],b[30003];
int pri[10001];
int ans=INT_MAX;
bool f(int x) {
	for(int i=2;i*i<=x;i++)
		if(x%i==0)
			return false;
	return true;
}
int main(void) {
	scanf("%d",&n);
	int sum=0;
	for(int i=2;i<=30003;i++)
		if(f(i)==true)
			pri[++sum]=i;
	scanf("%d %d",&m1,&m2);
	for(int i=1;i<=sum && m1!=1;i++)
		while(m1%pri[i]==0) {
			m1/=pri[i];
			a[i]+=m2;
		}		
	for(int i=1;i<=n;i++) {
		int cell,temp=0,flag=0;
		memset(b,0,sizeof(b));
		scanf("%d",&cell);	
		for(int j=1;j<=sum && cell!=1;j++) {
			while(cell%pri[j]==0) {
				cell/=pri[j];
				b[j]++;
			}	
		}
		for(int j=1;j<=sum;j++) {
			if(a[j]!=0 && b[j]==0) 
				flag=1;
			if(a[j]!=0 && b[j]!=0) {
				if(a[j]%b[j]==0)
            		temp=max(temp,a[j]/b[j]);
            	else 
					temp=max(temp,a[j]/b[j]+1);
			}
		}
		if(!flag)
			ans=min(ans,temp);
	}
	if(ans==INT_MAX)
		printf("-1\n");
	else
		printf("%d\n",ans);
	return 0;
}

