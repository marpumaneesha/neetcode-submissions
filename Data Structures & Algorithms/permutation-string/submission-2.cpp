class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.length()<s1.length()) return false;
        int l=0,r=s1.length();
        unordered_map<char,int>freq1;
        unordered_map<char,int>freq2;
        for(char c:s1){
            freq1[c]++;
        }
        for(int i=l;i<r;i++){
            freq2[s2[i]]++;
        }
        while(r<s2.length()){
            if(freq1==freq2) return true;
            freq2[s2[r]]++;
            freq2[s2[l]]--;
            if(freq2[s2[l]]==0){
                freq2.erase(s2[l]);
            }
            l++;
            r++;
        }
        return freq1==freq2;
    }
};
