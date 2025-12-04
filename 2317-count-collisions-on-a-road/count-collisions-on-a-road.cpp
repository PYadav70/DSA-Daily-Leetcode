class Solution {
public:
    int countCollisions(string directions) {
        int i = 0;
        int n = directions.length();
       
        
        while(i<n && directions[i] == 'L'){
            i++;
            }

           int j = n-1;
            while(j>=0 && directions[j] == 'R'){
             j--;
            }
            int collision = 0;
            while(i<=j){
                if(directions[i] == 'R' || directions[i] == 'L'){
                    collision += 1;
                }
                i++;
            }
            return collision;
    }
};