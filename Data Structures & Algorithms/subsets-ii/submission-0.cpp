class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>ds;
        sort(nums.begin(),nums.end());
        solve(0,ds,ans,nums);
        return ans;
    }
    void solve(int i,vector<int>&ds,vector<vector<int>>&ans,vector<int>& nums){
        ans.push_back(ds);
        for(int j=i;j<nums.size();j++){
            if(j>i && nums[j]==nums[j-1]){
                continue;
            }
            ds.push_back(nums[j]);
            solve(j+1,ds,ans,nums);
            ds.pop_back();
        }
    }
};
