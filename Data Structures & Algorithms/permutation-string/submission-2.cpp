class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        sort(s1.begin(),s1.end());
        int n1 = s1.size();
        int n2 = s2.size();

        if(n1>n2) return false;
        if(s1==s2) return true;

        int s = 0;
        
        while(s<=(n2-n1)){
            string sub = s2.substr(s,n1);
            sort(sub.begin(),sub.end());
            if(sub == s1){
                return true;
            }
            s++;
        }

        return false;
    }
};
