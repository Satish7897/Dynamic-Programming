class Solution {
public:
    int longestPalindromeSubseq(string s) {
         int n;
	n=s.length();
int 	mat[n][n];


	for(int i=0;i<n;i++)
     mat[i][i]=1;
    
    
	for(int j=2;j<=n;j++)
	{
		for(int i=0;i<n-j+1;i++)
		{
		int	 k=i+j-1;
			if(s[i]==s[k]&&j==2)
			mat[i][k]=2;
			else if(s[i]==s[k])
			mat[i][k]=2+mat[i+1][k-1];
			else
			mat[i][k]=max(mat[i+1][k],mat[i][k-1]);
		}
	}

	return mat[0][n-1];
    }
};