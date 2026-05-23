class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int>storeRes(nums.begin(), nums.end());

        int result = 0;

        for(int num : storeRes){
            if(num == INT_MIN || storeRes.find(num-1) == storeRes.end()){
             int streak = 1;
             int curr = num;

             while(curr != INT_MAX && storeRes.find(curr+1) != storeRes.end()){
                curr++;
                streak++;
             }
            result = max(result, streak);
        }
        }
        return result;
    }
};