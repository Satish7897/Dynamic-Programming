class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int x=nums.size();
        int val[x+2];
        for(int i=0;i<nums.size();i++)
       val[i]=1;
        int mi=INT_MIN;
        if(nums.size()<2)
            return nums.size();
        for(int j=1;j<nums.size();j++)
        {
            for(int i=0;i<j;i++)
            {
                if(nums[i]<nums[j])
                    val[j]=max(val[j],val[i]+1);
                mi=max(mi,val[j]);
                
            }
        }
        return mi;
        
        
    }
};