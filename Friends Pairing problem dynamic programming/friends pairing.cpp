#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define co 1000000007
int main() {
	ll t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll dp[n+100];
		dp[1]=1;
		dp[2]=2;
		for(ll i=3;i<=n;i++)
		{
			dp[i]=(dp[i-1]%co+((i-1)*dp[i-2])%co)%co;
		}
		// for(int i=1;i<n;i++)
		// cout<<dp[i]<<" ";
		cout<<dp[n]<<"\n";
	}
}