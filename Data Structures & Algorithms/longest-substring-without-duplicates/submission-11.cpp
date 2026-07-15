class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start = 0;
        int len = 0;
        map<char, int> mp;

        for (int end = 0; end < s.size(); end++) {
            if (mp.contains(s[end])) {
                start = max(start, mp[s[end]] + 1);
            }

            mp[s[end]] = end;
            len = max(len, end - start + 1);
        }

        return len;
    }
};