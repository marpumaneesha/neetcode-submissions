class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int res=0,maxi=0;
        unordered_map<int,int> freq;
        for(int num:nums){
            freq[num]++;
            if(freq[num]>maxi){
                res=num;
                maxi=freq[num];
            }
        }return res;
    }
};