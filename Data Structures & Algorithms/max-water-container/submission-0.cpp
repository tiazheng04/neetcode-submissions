class Solution {
public:
    int maxArea(vector<int>& heights) {
        int p1 = 0;
        int p2 = heights.size()-1;
        int height = min(heights[p1], heights[p2]);
        int maxi = height*(heights.size()-1);

        while(p1<p2){
            if(heights[p2]>heights[p1]){
                p1++;
            } else if(heights[p2]<=heights[p1]){
                p2--;
            } 

            height = min(heights[p1], heights[p2]);
            maxi = max(maxi, height*(p2-p1));
        }

        return maxi;
    }
};
