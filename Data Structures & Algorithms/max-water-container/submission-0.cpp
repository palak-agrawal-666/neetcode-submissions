class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size()-1;
        int ans = INT_MIN;
        while(left<right){
            ans = max(ans , (right-left)*min(heights[left],heights[right]));
            if(heights[left]>=heights[right]){
                right--;
            }
            else{
                left++;
            }
        }
        return ans;
    }
};
