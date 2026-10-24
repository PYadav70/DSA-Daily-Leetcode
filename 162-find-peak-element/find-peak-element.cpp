class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] < nums[mid + 1]) {
                low = mid + 1; // Peak lies in the right half
            } else {
                high = mid; // Peak lies in the left half (including mid)
            }
        }
        return low; // low and high converge to a peak index
    }
};
