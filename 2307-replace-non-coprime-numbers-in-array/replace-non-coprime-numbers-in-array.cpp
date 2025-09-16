class Solution {
public:

   int gcd(int a, int b) {
        while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        vector<int>result;
        // int n = nums.size();

        for(int num:nums){

            while(!result.empty()){
              int  prev = result.back();
               int curr = num;

               int GCD = gcd(prev,curr);
               if(GCD==1){
                break;
               }
               result.pop_back();
               int LCM = prev / GCD * curr;

               num  = LCM;

            }
            result.push_back(num);

        }




     return result;
        
        
    }
};