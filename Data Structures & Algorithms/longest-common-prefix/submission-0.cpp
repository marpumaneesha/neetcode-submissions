class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans=strs[0];
        for(int i=1;i<strs.size();i++){
            int j=0;
            for(j;j<min(ans.length(),strs[i].length());j++){
                if(ans[j]!=strs[i][j]){
                    break;
                }
            }ans=ans.substr(0,j);
        }
        return ans;
    }
};