class Solution {
public:
    bool isPalindrome(string s) {
        int p1 = 0; 
        int p2 = s.size()-1;

        for(int i = 0; i < s.size(); i++){
            s[i] = tolower(s[i]);
        }


        while(p1<p2){
            while(p1 < p2 && !((s[p1] >= '0' && s[p1] <= '9') || (s[p1] >= 'a' && s[p1] <= 'z'))){
                p1++;
            }

            while(p1 < p2 && !((s[p2] >= '0' && s[p2] <= '9') || (s[p2] >= 'a' && s[p2] <= 'z'))){
                p2--;
            }
            if(s[p1]!=s[p2]){
                return false;
            }

            p1++;
            p2--;
        }

        return true;
    }
};