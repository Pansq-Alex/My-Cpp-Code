#include <bits/stdc++.h>
using namespace std;
int f(int n,int i,int j)
{
	if(i==1) return j;
	if(j==n) return j+i-1;
	if(i==n) return 3*n-1-j;
	if(j==1) return 4*n-2-i;
	return n*4-4+f(n-2,i-1,j-1);
}
int main()
{
	int n,i,j;
	cin>>n>>i>>j;
	cout<<f(n,i,j);
	return 0;
}

