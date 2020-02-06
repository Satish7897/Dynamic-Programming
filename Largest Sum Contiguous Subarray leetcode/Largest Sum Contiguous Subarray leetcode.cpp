class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mi=nums[0];
   for(int i=1;i<nums.size();i++)
   {
   	nums[i]=max(nums[i],nums[i]+nums[i-1]);
   	mi=max(nums[i],mi);
   }
   return mi;
        
    }
};