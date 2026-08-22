class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        int i = 0;
        int j = 0;
        int len = 0;

        unordered_map<char,int>freq;

        while (j < s.size()) {
            freq[s[j]]++;

            if (freq[s[j]] == 1) {
                len = max(len, j - i + 1);
            } else {
                while (freq[s[j]] > 1) {
                    freq[s[i]]--;
                    i++;
                }
            }

            j++;
        }

        return len;
    }
};
