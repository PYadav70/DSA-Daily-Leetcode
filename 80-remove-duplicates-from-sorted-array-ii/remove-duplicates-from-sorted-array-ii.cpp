class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = 2;;

        while(j<n){
            if(nums[i] != nums[j]){
                i++;
                nums[i+1] = nums[j];
            }
            j++;
        }
        if(n <=2){
            return n;
        }
        return i+2;
    }
};