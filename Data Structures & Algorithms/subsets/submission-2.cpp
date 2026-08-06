class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        solve(0,ds,ans,nums);
        return ans;
    }
    void solve(int ind,vector<int>& ds,vector<vector<int>>& ans,const vector<int>nums){
        if(ind>=nums.size()) {
            ans.push_back(ds);
            return;
        }
        ds.push_back(nums[ind]);
        solve(ind+1,ds,ans,nums);
        ds.pop_back();
        solve(ind+1,ds,ans,nums);
    }
};
