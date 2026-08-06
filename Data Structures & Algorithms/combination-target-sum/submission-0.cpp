class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        solve(0,nums,target,ans,ds);
        return ans;
    }
    void solve(int i,vector<int>& nums,int target,vector<vector<int>>& ans,vector<int>& ds){
        if(target==0){
            ans.push_back(ds);
            return;
        }
        if (target < 0 || i >= nums.size()) {
            return;
        }
        ds.push_back(nums[i]);
        solve(i,nums,target-nums[i],ans,ds);
        ds.pop_back();
        solve(i+1,nums,target,ans,ds);
    }
};
