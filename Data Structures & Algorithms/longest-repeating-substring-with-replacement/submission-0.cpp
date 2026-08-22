class Solution {
public:
    int characterReplacement(string s, int k) {
        int i = 0,j=0,ans = 0;
        int n = s.size();
        int maxi = INT_MIN;
        unordered_map<char,int>mp;
        while(j<n){
            mp[s[j]]++;
            maxi = max(maxi , mp[s[j]]);
            int len = j-i+1;
            int rR= len - maxi;
            if(rR <= k){
                ans = len;
            }
            else{
                while(j-i+1 - maxi > k){
                    mp[s[i]]--;
                    maxi = max(maxi , mp[s[i]]);
                    i++;
                }
            }
            j++;
        }
        return ans;
    }
};
