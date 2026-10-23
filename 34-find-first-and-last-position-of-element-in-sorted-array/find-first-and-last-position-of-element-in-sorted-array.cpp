class Solution {
public:
    int findRightMost(vector<int>&nums, int target , int n){
    int low = 0;
    int high = n-1;
    int rightMost = -1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(nums[mid] == target){
            rightMost = mid;
            low = mid+1; 
        }else if(target > nums[mid]){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    return rightMost;
   }
   int findLeftMost(vector<int>&nums, int target, int n){
    int low = 0;
    int high = n-1;
    int leftMost = -1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(nums[mid] == target){
        leftMost = mid;
        high = mid-1;
        }else if(target>nums[mid]){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    return leftMost;
   }

    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int rightMost = findRightMost(nums,target,n);
        int leftMost = findLeftMost(nums,target,n);
    
        return {leftMost,rightMost};
    }
};