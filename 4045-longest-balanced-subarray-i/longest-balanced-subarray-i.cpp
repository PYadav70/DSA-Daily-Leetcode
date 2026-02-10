class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int n = nums.size();
        int maxLen = 0;

        for(int i = 0; i<n; i++){
           unordered_set<int> evenCount, oddCount; 

            for(int j=i; j<n; j++){
                if(nums[j] % 2 == 0){
                    evenCount.insert(nums[j]);
                }else{
                    oddCount.insert(nums[j]);
                }
                 if (evenCount.size() == oddCount.size()) {
                    maxLen = max(maxLen, j - i + 1);
                }
            }
        }

        return maxLen;

    }
};