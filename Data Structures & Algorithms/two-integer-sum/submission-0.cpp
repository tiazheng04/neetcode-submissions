class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> sums;
        for(int i = 0; i < nums.size(); i++){
            if(sums.contains(target-nums[i])){
                return {sums[target - nums[i]], i};
            } else{
                sums[nums[i]] = i;
            }
        }
    }
};
