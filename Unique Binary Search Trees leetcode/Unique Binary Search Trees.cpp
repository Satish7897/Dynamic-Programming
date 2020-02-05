class Solution {
public:
    int numTrees(int n) {
        	long long int a[n+2];
	a[0]=1;
	a[1]=1;
	for(int i=2;i<=n;i++)
	{
		long long int sum=0;
		for(int j=1;j<=i;j++)
		{
			sum+=(a[j-1]*a[i-j]);
		}
		a[i]=sum;
	}
return a[n];
    }
};