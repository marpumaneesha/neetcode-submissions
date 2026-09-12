class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size()+1,-1);
        
        return dfs(nums,dp,0);
    }
    int dfs(vector<int>& nums,vector<int>& dp,int i){
        if(i>=nums.size()){
            return 0;
        }
        if(dp[i]!=-1) return dp[i];
        dp[i]=max(dfs(nums,dp,i+1),nums[i]+dfs(nums,dp,i+2));
        return dp[i];
    }
};
