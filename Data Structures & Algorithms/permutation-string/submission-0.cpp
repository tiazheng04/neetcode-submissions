class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        if(s2.size()<s1.size()){
            return false;
        }

        map<char, int> mp1;
        map<char, int> mp2;
        //char, counts of char

        for(int i = 0; i < s1.size(); i++){
            mp1[s1[i]]++;
            mp2[s2[i]]++;
        }  

        if(mp1 == mp2){
            return true;
        }

        for(int i = s1.size(); i < s2.size(); i++){
            mp2[s2[i-s1.size()]]--;
            if(mp2[s2[i-s1.size()]] == 0){
                mp2.erase(s2[i - s1.size()]);
            }
            mp2[s2[i]]++;
            if(mp1 == mp2){
                return true;
            }
        }

        return false;
    }
};
