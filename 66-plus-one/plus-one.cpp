class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        int k=1;

        for(int i=n-1 ; i>=0; i--){
            
          int sum = digits[i]+k;

            digits[i] = sum %10;

            k = sum/10;
        }

        while(k>0){
            digits.insert(digits.begin(), k%10);
            k = k/10;
        }

        return digits;
        
    }
};