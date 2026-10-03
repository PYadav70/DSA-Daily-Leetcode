class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        int contNum = 0;
        long long product = 1;
        int left = 0;

        for(int right=0; right<n; right++){
            product = product*nums[right];

            while(product >= k && left <= right){
                product = product/nums[left];
                left++;
            }
            contNum += (right-left + 1);
        }
        return contNum;
    }
};