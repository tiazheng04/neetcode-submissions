class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;
        //each nique number, count 
        for(int i = 0; i < nums.size(); i++){
                mp[nums[i]]++;
        }

        priority_queue<pair<int,int>> pq;
        for (auto& [val, count] : mp) {
            pq.push({count, val});
        }

        vector<int> sol;
        for(int i = 0; i < k; i++){
            int s = pq.top().second;
            pq.pop();
            sol.push_back(s);
        }

        return sol;
    }
};
