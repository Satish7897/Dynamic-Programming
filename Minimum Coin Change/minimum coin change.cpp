class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int val[amount+2];
	val[0]=0;
	for(int i=1;i<=amount;i++)
	{
		val[i]=100000;
	}
	for(int i=0;i<=amount;i++)
	{
		for(int j=0;j<coins.size();j++)
		{
			if((i-coins[j])>=0)
			{
				val[i]=min(val[i],val[i-coins[j]]+1);
			}
		}
	}
	
	if(val[amount]<10000)
	return val[amount];
	else
	return -1;
    }
};