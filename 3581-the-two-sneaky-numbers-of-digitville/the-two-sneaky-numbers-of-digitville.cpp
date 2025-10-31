class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int>result;

        for(int i=0; i<n; i++){
           for(int j=i+1; j<n; j++){
            if(nums[i] == nums[j]){
                result.push_back(nums[i]);
            }
           }
        }
        return result;
    }
};