class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>cnt;
        for(int num:nums) cnt[num]++;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>heap;
        for(auto& it:cnt){
            heap.push({it.second,it.first});
            if(heap.size()>k) heap.pop();
        }
        vector<int>res;
        for(int i=0;i<k;i++){
            res.push_back(heap.top().second);
            heap.pop();
        }
        return res;
    }
};
