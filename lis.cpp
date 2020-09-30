class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        int n = nums.size();
        
        if(n==0) return 0;
        if(n==1) return 1;
        vector<int>dp(n+2);
        
        dp[0] = 1;
        
        for(int i = 1 ;i < n; i++){
            dp[i] = 1;
            for(int j = 0 ; j < i; j++){
                if(dp[j] + 1 > dp[i] and nums[i]  >nums[j]){
                    dp[i] = dp[j]  +1;
                }
            }
        }
        int maxval = INT_MIN;
        for(int i =0; i< n ; i++){
            maxval = max(maxval , dp[i]);
        }
        
        return maxval;
        
    }
};