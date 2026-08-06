class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(candidates.begin(), candidates.end());
        solve(0,candidates,target,ans,ds);
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
        solve(i+1,nums,target-nums[i],ans,ds);
        ds.pop_back();
        while(i+1<nums.size() && nums[i]==nums[i+1]){
            i++;
        }solve(i+1,nums,target,ans,ds);
    }
    
};
