class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        map<int, int> nums_map;
        for(int i = 0; i < nums.size(); i++){
            if(nums_map.contains(nums[i])){
                return true;
            } else{
                nums_map[nums[i]]++;
            }
        }

        return false;
    }
};