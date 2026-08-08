class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string s;
        solve(0,0,n,ans,s);
        return ans;
    }
    void solve(int open,int close,int n,vector<string>&ans,string& s){
        if(open==close && open == n){
            ans.push_back(s);
            return;
        }
        if(open<n){
            s+='(';
            solve(open+1,close,n,ans,s);
            s.pop_back();
        }
        if(close<open){
            s+=')';
            solve(open,close+1,n,ans,s);
            s.pop_back();
        }
        
    }
};
