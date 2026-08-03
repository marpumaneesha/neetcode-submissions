class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int i=0;
       int j=1;
       int ans=0;
       while(j<prices.size()){
        if(prices[i]<prices[j]){
            int p=prices[j]-prices[i];
            ans=max(ans,p);
        }else i=j;
        j++;
       } return ans;
    }
};
