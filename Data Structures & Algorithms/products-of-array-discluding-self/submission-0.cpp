class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> forward(nums.size()+1);
        vector<int> backward(nums.size()+1);
        vector<int> sol(nums.size());
        forward[0] = 1;
        backward[0] = 1;

        for(int i = 1; i < nums.size()+1; i++){
            forward[i] = nums[i-1]*forward[i-1];
            backward[i] = nums[nums.size()-i]*backward[i-1];

        }

        for(int i = 0; i < nums.size(); i++){
            sol[i] = forward[i] * backward[nums.size()-i-1];
        }

        return sol;

    }
};
