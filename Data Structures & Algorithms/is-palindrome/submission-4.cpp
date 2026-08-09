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
        int i=0,j=dupli.size()-1;

        while(i<=j){
            if(dupli[i]!=dupli[j]) return false;
            i++;
            j--;
        }

        return true;
    }
};
