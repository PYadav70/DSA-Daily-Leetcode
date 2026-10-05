class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int subLength = INT_MAX;
        int left = 0;
        int sum = 0;

        for(int right=0; right<n; right++){
           sum = sum + nums[right];

           while(sum >= target && left <= right){
           
           subLength = min(subLength,right - left + 1);
           sum -= nums[left];
           left++;
           }
        }
        return subLength == INT_MAX ? 0 : subLength;
    }
};