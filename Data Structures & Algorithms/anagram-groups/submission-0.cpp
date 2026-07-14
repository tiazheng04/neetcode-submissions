class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> groups;
        map<string, int> mp;
        //sorted word, index

        for(int i = 0; i <strs.size(); i++){
            string s = strs[i];
            sort(s.begin(), s.end());
            if(mp.count(s)){
                groups[mp[s]].push_back(strs[i]);
            } else{
                mp[s] = groups.size();
                groups.push_back({strs[i]});
            }
        }

        return groups;
    }
};