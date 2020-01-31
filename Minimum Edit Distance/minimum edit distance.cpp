class Solution {
public:
    int minDistance(string word1, string word2) {
      int x=word1.size(),i,j;
        int y=word2.size();
        int a[y+1][x+1];
        for( i=0;i<=y;i++)
        {    
            for( j=0;j<=x;j++)
            {
                if(i==0)
                    a[0][j]=j;
                else if(j==0)
                    a[i][0]=i;
                else
                {
                    if(word2[i-1]!=word1[j-1])
                    {
                        int k=min(a[i][j-1],a[i-1][j]);
                        k=min(a[i-1][j-1],k);
                        a[i][j]=k+1;
                    }
                    else
                        a[i][j]=a[i-1][j-1];
                }
            }
        }
        
        
       return a[y][x];
        
    }
};