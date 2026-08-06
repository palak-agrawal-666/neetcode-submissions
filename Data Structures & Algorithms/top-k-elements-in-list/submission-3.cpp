class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        for(int i:nums){
            freq[i]++;
        }

        vector<vector<int>>bucket(nums.size()+1);
        for(const auto &it:freq){
            bucket[it.second].push_back(it.first);
        }

        vector<int>ans;
        for(int i=nums.size();i>0;i--){
            for(int n : bucket[i]){
                ans.push_back(n);
                if(ans.size()==k){
                    return ans ;
                }
            }
        }

        return {};
    }
};