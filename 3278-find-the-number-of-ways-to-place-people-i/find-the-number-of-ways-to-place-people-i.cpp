class Solution {
public:
    int numberOfPairs(vector<vector<int>>& points) {
        int n = points.size();
        int count = 0;

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i == j) continue;

                int topLeftX = points[i][0];
                int topLeftY = points[i][1];

                int bottomRightX = points[j][0];
                int bottomRightY = points[j][1];

                // Ensure proper top-left and bottom-right orientation
                if(topLeftX > bottomRightX) continue;
                if(topLeftY < bottomRightY) continue;

                bool valid = true;
                for(int k=0; k<n; k++){
                    if(k == i || k == j) continue;
                    int x = points[k][0], y = points[k][1];

                    // Check if point k lies inside the rectangle
                    if(x >= topLeftX && x <= bottomRightX &&
                       y >= bottomRightY && y <= topLeftY) {
                        valid = false;
                        break;
                    }
                }

                if(valid) count++;
            }
        }

        return count;
    }
};
