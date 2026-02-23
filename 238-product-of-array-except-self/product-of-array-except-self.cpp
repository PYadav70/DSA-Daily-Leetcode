class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        // brute force
        // vector<int>result(n);

        // for(int i=0; i<n; i++){
        //     int product = 1;
        //     for(int j=0; j<n; j++){
        //         if(i != j){
        //             product *= nums[j];
        //         }
        //     }
        //     result[i] = product;
        // }
        // return result;
        
        vector<int>left(n);
        vector<int>right(n);

        left[0] = 1;
        right[n-1] = 1;

        for(int i=1; i<n; i++){
            left[i] = nums[i-1]*left[i-1];

        }
        for(int i=n-2; i>=0; i--){
            right[i] = nums[i+1]*right[i+1];
        }
        vector<int>result(n);
        for(int i=0; i<n; i++){
            result[i] = left[i]*right[i];
        }
       return result;
    }
};