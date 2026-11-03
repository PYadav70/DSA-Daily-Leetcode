class Solution {
public:
   void reverse(vector<int>&nums, int k, int i, int j){
      while(i<j){
        swap(nums[i],nums[j]);
        i++;
        j--;
      }
   }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(n == 0){
            return;
        }
          k = k%n;
        if(k == 0){
            return ;
        }
      

        reverse(nums, k,0,n-1);
        reverse(nums, k,0, k-1);
        reverse(nums, k,k, n-1);
    }
};