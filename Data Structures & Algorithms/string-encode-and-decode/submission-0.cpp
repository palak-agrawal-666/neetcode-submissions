class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";
        for(string s:strs){
            res = res + to_string(s.size()) + "#" + s;
        }
        return res;
    }

    vector<string> decode(string res) {
        vector<string>ans;
        for(int i=0;i<res.size();){
            int j = i;
            while(res[j] != '#') j++;
            int len = stoi(res.substr(i, j - i));
            i = j + 1;
            
            string word = "";
            int count = len;
            while(count--){
                word+=res[i];
                i++;
            }
            ans.push_back(word);
        }
        return ans;
    }
};