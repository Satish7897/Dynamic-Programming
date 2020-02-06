class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
       
	 int mi;
	 mi=triangle[0][0];
        for(int i=1;i<triangle.size();i++)
        {  
             mi=INT_MAX;
            for(int j=0;j<triangle[i].size();j++)
            {    
                
                
                    if((j-1)>=0&&j<triangle[i-1].size()){
                triangle[i][j]=triangle[i][j]+min(triangle[i-1][j-1],triangle[i-1][j]);
                mi=min(mi,triangle[i][j]);
                    }
                else if(j>=triangle[i-1].size())
                {
                     triangle[i][j]=triangle[i][j]+triangle[i-1][j-1];
                mi=min(mi,triangle[i][j]);
                }
                else
                {
                	 triangle[i][j]=triangle[i][j]+triangle[i-1][j];
                mi=min(mi,triangle[i][j]);
                }
            
        }
       
        }
       
        return mi;
                        }
};