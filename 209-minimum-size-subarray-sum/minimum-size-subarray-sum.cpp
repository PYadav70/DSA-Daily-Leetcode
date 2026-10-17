class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int minLen = INT_MAX;
        int left = 0;
        int sum = 0;

        for(int right = 0; right<n; right++){
            sum += nums[right];

            while(sum >= target && left<=right){
                sum -= nums[left];
                minLen = min(minLen, right-left+1);
                left++;
            }
        }
        return minLen == INT_MAX ? 0 : minLen;
    }
};