class Solution {
public:
    int findSumDivisor(int num){
        int divisorCount = 0;
        int divisorSum = 0;

        for(int fact = 1; fact*fact <= num; fact++){
            if(num % fact == 0){
                int other = num/fact;

                if(other == fact){
                    divisorCount++;
                    divisorSum += fact;
                }else{
                    divisorCount += 2;
                    divisorSum += (fact + other);
                }
            }
            if(divisorCount > 4){
                return 0;
            }
            
        }
        return divisorCount == 4 ? divisorSum : 0;
    }
    int sumFourDivisors(vector<int>& nums) {
        int result = 0;
        for(int &num : nums){
            result += findSumDivisor(num);
        }
        return result;
    }
};