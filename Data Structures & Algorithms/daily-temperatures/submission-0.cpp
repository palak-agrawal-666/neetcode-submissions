class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<int>st;
        int i=temp.size()-1;
        vector<int>ans(temp.size(),0);
        while(i>=0){
            while(!st.empty() && temp[st.top()]<=temp[i]){
                st.pop();
            }
            if(st.empty()){
                ans[i] = 0;
            }
            else{
                ans[i] = st.top()-i;
            }
            st.push(i);
            i--;
        }
        return ans;
    }
};
