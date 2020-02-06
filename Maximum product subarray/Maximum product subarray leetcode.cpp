class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int n=arr.size();
         int mx=arr[0],mn=arr[0],ans = arr[0],cmx=arr[0],cmn=arr[0];
    for(int i=1;i<n;i++){
        cmx=max({arr[i],mx*arr[i],mn*arr[i]});
        cmn=min({arr[i],mx*arr[i],mn*arr[i]});
        ans = max(ans , cmx);
        mx=cmx;mn=cmn;
        // cerr<<mx<<" "<<mn<<" "<<ans<<endl;  
    }
    return ans;
	
    }
};