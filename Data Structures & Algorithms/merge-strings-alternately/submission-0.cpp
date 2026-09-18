class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1=word1.size();
        int n2=word2.size();
        string ans;
        for(int i=0;i<n1||i<n2;i++){
            if(i<n1) ans+=word1[i];
            if(i<n2) ans+=word2[i];
        }return ans;
    }
};