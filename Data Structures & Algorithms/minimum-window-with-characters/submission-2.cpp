class Solution {
   public:
    string minWindow(string s, string t) {
        unordered_map<char, int> mp;
        for (char c : t) {
            mp[c]++;
        }

        int r = 0, l = 0, count = 0;
        int len = INT_MAX;
        int start;
        while (r < s.size()) {
            if (mp[s[r]] >= 1) {
                count++;
            }

            mp[s[r]]--;

            while (l<=r && count == t.size()) {
                
                if (r-l+1 < len) {
                    start = l;
                    len = r-l+1;
                }

                mp[s[l]]++;
                if (mp[s[l]] > 0) {
                    count--;
                }
                l++;
            }
            r++;
        }
        return (len == INT_MAX)?"":s.substr(start,len);
    }
};
