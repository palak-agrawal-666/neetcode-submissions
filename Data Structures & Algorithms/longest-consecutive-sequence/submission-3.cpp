class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<=1) return nums.size();
        sort(nums.begin(),nums.end());
        int seq = 1;
        int ans = 1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]-nums[i-1]==0) continue;
            if(nums[i]-nums[i-1]==1){
                seq++;
                ans = max(ans,seq);
            }
            else{
                seq = 1;
            }
        }

        return ans;
    }
};
