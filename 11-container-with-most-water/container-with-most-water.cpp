class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size()-1;
        int mostWater = 0;

        while( i < j){
            int w = j-i;
            int h = min(height[i], height[j]);
            int area = w*h;
            mostWater = max(mostWater, area);

            if(height[i] > height[j]){
                j--;
            }else{
                i++;
            }
        }
        return mostWater;
    }
};