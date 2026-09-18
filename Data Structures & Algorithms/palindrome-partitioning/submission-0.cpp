class Solution {
public:
    void part(string& s, int ind,vector<string>&ds,vector<vector<string>>& ans){
        if(ind>=s.size()) {
            ans.push_back(ds);
            return;
        }
        for(int i=ind;i<s.size();i++){
            if(ispal(s,ind,i)){
                ds.push_back(s.substr(ind,i-ind+1));
                part(s,i+1,ds,ans);
                ds.pop_back();
            }
        }
    }
    bool ispal(string s,int st,int end){
        while(st<=end){
            if(s[st]!=s[end]) return false;
            st++;
            end--;
            
        }return true;
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>ds;
        part(s,0,ds,ans);
        return ans;
    }
};
