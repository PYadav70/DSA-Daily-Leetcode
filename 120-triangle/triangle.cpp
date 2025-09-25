class Solution {
public:
    // int n;
    // int t[201][201];
    // int solve(vector<vector<int>>&triangle,int  row, int col){
    //     if(row == n-1){
    //         return triangle[row][col];
    //     }
    //     if(t[row][col] != -1){
    //         return t[row][col];
    //     }
    //     int minPathSum = triangle[row][col] + min(solve(triangle, row+1,col), solve(triangle, row+1, col+1));

    //     return t[row][col] =  minPathSum;
    // }
    int minimumTotal(vector<vector<int>>& triangle) {
       int n = triangle.size();
       vector<vector<int>> t = triangle;

       for(int row = n-2; row >=0; row--){
        for(int col = 0; col <= row; col++){
            t[row][col] = t[row][col] + min(t[row+1][col], t[row+1][col+1]);
        }
       }

        // memset(t, -1, sizeof(t));

        // return solve(triangle, 0, 0);
        return t[0][0];
        
    }
};