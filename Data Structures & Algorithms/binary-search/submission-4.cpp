class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lower = 0;
        int upper = nums.size()-1;
        int mid = (lower+upper)/2;

        while(lower < upper){
            mid = (lower+upper)/2;
            if(nums[mid] == target){
                return mid;
            }
            if(nums[mid] > target){
                upper = mid;
            } else {
                lower = mid+1;
            }
        }
        if(nums[lower] == target){
            return lower;
        } else{
            return -1;
        }
    }
};
