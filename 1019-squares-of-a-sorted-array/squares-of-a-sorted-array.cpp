class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int>result(n);
        int left = 0;
        int right = n-1;
        int index = n-1;

        for(int i=0; i<n; i++){
            if(abs(nums[left]) > abs(nums[right])){
                result[index] = nums[left] * nums[left];
                left++;
            }else{
                result[index] = nums[right] * nums[right];
                right--;
            }
            index--;
        }
        return result;
    }
};