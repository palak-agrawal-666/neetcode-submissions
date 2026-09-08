class Solution {
public:
    bool isValid(string s) {
        int i = 0;
        stack<char>st;

        while(i<s.size()){
            if(!st.empty()){
                char t = st.top();
                if((s[i]==')' && t=='(')||(s[i]==']' && t=='[')||(s[i]=='}' && t=='{')){
                    st.pop();
                }
                else if (s[i]=='[' || s[i]=='{' || s[i]=='('){
                    st.push(s[i]);
                }
                else{
                    return false;
                }
            }
            else{
                if((s[i]==')')||(s[i]==']')||s[i]=='}'){
                    return false;
                }
                else{
                    st.push(s[i]);
                }

            }
            i++;
        }

        return st.empty();
    }
};
