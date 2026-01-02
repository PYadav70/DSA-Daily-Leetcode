class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        // unordered_map<int,int>result;
        // int n = nums.size();

        // for(int i=0; i<n; i++){
        //    result[nums[i]]++;
        //    if(result[nums[i]] > 1){
        //    return nums[i];
        //     }
        // }
        // return -1;

        // 2nd approach

        for(int i=2; i<nums.size(); i++){
            if(nums[i] == nums[i-1] || nums[i] == nums[i-2]){
                return nums[i];
            }
        }
      return nums.back();
    }
};