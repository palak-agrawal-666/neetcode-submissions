class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int>st;
        for(int i:nums){
            st.insert(i);
        }

        if(st.size()!=nums.size()){
            return true;
        }
        return false;
    }
};