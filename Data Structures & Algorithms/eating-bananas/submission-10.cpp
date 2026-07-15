class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int lower = 1;
        int upper = 0;
        for(int i = 0; i < piles.size(); i++){
            upper = max(upper, piles[i]);
        }
        int mid;

        while(lower<upper){
            mid = (lower + upper)/2;
            int count = 0;
            for(int i = 0; i < piles.size(); i++){
                count += (piles[i]+mid-1)/mid;
            }

            if(count > h){
                lower = mid+1;
            } else{
                upper = mid;
            }
        }

        return lower;
    }
};
