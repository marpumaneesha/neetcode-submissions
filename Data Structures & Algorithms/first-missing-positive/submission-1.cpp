class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        while(i<n){
            if(nums[i]<=0 || nums[i]>n){
                i++;
                continue;
            }
            int val=nums[i]-1;
            if(nums[i]!=nums[val]){
                swap(nums[i],nums[val]);
            }
            else i++;
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=i+1) return i+1;
            
        }return n+1;
    }
};