class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
      int n = nums.size();
      vector<int>result;

      for(int &num : nums){
         num = num*num;
        result.push_back(num);
        
      }  
      sort(begin(result), end(result));
      return result;
    }
};