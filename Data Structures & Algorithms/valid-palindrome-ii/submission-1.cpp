class Solution {
public:
    bool validPalindrome(string s) {
        int l=0,r=s.size()-1;
        while(l<r){
            if(s[l]!=s[r]){
                return ispal(s,l+1,r) || ispal(s,l,r-1);
            }
            l++;
            r--;
        }
        return true;
    }
    bool ispal(string s,int l,int r){
       //int l = 0, r = s.length() - 1;
        while (l < r) {
            if (s[l] != s[r]) {
                return false;
            }
            l++;
            r--;
        }
        return true; 
    }
};