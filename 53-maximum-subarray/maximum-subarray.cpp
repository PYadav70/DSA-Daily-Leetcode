class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxsum = nums[0];
        int sum = 0;

        for(int i=0; i<n; i++){
            sum += nums[i];
            maxsum = max(maxsum, sum);

            if(sum < 0){
                sum =  0;
            }
        }
        return maxsum;
    }
};