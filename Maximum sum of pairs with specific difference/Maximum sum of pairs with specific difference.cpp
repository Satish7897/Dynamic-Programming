//When I wrote this, only God and I understood what I was doing
//Now, God only knows :-)
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define ch char
#define vc vector
#define str string
int main() {
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
	
    int n,k;cin>>n;
    int a[n+10];
    for(int i=0;i<n;i++)
    cin>>a[i];
    cin>>k;
    int curr[n+1],prev[n+1],dp[n+1];
    memset(curr,-1,sizeof(curr));
    memset(prev,-1,sizeof(prev));
    sort(a,a+n);

    for(int i=1;i<n;i++)
      {
      	for(int j=i-1;j>=0;j--)
      	{
      		if(abs(a[i]-a[j])<k)
      		{
      			curr[i]=j;
      			prev[i]=j;
      			prev[j]=curr[j];
      			curr[j]=i;
      			dp[i]=a[i]+a[j];
      			break;
			}
		}

	  }
	
	  bool visited[n]={false};
	  int sum=0;
	  for(int i=n-1;i>=0;i--)
	  { 
	      if(!visited[i]){
		  
	  	if(curr[i]!=-1&&visited[curr[i]]==false)
	  	{
	  		sum+=a[curr[i]]+a[i];
	  		visited[i]=true;
	  		visited[curr[i]]=true;

		}
		else if(prev[i]!=-1&&visited[prev[i]]==false)
		{
			sum+=a[prev[i]]+a[i];
	  		visited[i]=true;
	  		visited[prev[i]]=true;
//	  			cout<<a[i]<<" "<<a[prev[i]]<<"\n";
		}
        	}
	  }
	  cout<<sum;
	  cout<<"\n";
//	  for(int i=0;i<n;i++)
//	  cout<<a[i]<<" "<<prev[i]<<" "<<curr[i]<<"\n";
}
   
}
