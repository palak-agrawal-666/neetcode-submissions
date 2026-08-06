class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>mp;
        for(string s : strs){
            string v = s;
            sort(v.begin(),v.end());
            mp[v].push_back(s);
        }
        for(auto it:mp){
            ans.push_back(it.second);
        }

        return ans;
        // map<vector<int>,vector<string>>mp;
        // vector<vector<string>>ans;
        // for(string s : strs){
        //     vector<int>v(26,0);
        //     for(int i=0;i<s.size();i++){
        //         v[s[i]-'a']++;
        //     }
        //     mp[v].push_back(s);
        // }
        // for(auto it : mp){
        //     ans.push_back(it.second);
        // }

        // return ans;
    }
};
