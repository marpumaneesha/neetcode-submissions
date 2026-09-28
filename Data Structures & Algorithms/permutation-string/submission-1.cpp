class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s2.length() < s1.length()) return false;

        unordered_map<char, int> freq1;
        unordered_map<char, int> freq2;

        // Populate freq1 for s1 and initial window for s2
        for (char c : s1) {
            freq1[c]++;
        }
        for (int i = 0; i < s1.length(); i++) {
            freq2[s2[i]]++;
        }

        int l = 0;
        int r = s1.length();

        while (r < s2.length()) {
            // Check if current window matches
            if (freq1 == freq2) return true;

            // Add character entering the window on the right
            freq2[s2[r]]++;

            // Remove character leaving the window on the left
            freq2[s2[l]]--;
            if (freq2[s2[l]] == 0) {
                freq2.erase(s2[l]); // Essential so map equality comparison works
            }

            l++;
            r++;
        }

        // Check the last window
        return freq1 == freq2;
    }
};