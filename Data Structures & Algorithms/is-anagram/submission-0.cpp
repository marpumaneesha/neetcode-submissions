class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.length();
        int m=t.length();
        if(m!=n) return false;
        unordered_map<char,int> freqs;
        unordered_map<char,int> freqt;
        for(int i=0;i<m;i++){
            freqs[s[i]]++;
            freqt[t[i]]++;
        }
        return freqs==freqt;
    }
};
