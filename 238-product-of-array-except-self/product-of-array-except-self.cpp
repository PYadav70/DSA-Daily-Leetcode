class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>leftArray(n);
        vector<int>rightArray(n);
        leftArray[0] = 1;
        rightArray[n-1] = 1;

        for(int i=1; i<n;i++){
            leftArray[i] = nums[i-1] * leftArray[i-1];
        }
        for(int i=n-2; i>=0; i--){
            rightArray[i] = nums[i+1] * rightArray[i+1];
        }
        vector<int>result(n);
        for(int i=0; i<n; i++){
            result[i] = leftArray[i] * rightArray[i];
        }
       return result;
    }
};