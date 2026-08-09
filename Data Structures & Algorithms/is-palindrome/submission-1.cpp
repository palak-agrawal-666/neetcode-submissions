class Solution {
public:
    bool isPalindrome(string s) {
        string dupli ="";
        for(char c:s){
            if((c>='a' && c<='z')||(c>='0'&&c<='9')){
                dupli+=c;
            }
            else if(c>='A' && c<='Z'){
                dupli+=(c+32);
            }
        }

        string dummy = dupli;
        reverse(dummy.begin(),dummy.end());
        return (dummy == dupli);
    }
};
