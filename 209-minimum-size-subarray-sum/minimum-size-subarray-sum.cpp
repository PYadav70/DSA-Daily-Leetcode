class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int minlen = INT_MAX;
        int left = 0;

        for(int right=0; right<n; right++){
            sum += nums[right];

            while(sum >= target && left <= right){
                sum -= nums[left];
                minlen = min(minlen, right-left+1);
                left++;
            }
           
        }
         return minlen == INT_MAX ? 0 : minlen;
    }
};