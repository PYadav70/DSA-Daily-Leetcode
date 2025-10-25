class Solution {
public:
    int totalMoney(int n) {
        int term = n/7;

        int first = 28;
        int last = 28 + (term - 1) * 7;

        int result = term *(first + last)/2;

        int start_money = 1 + term;

        for(int day = 1; day <=(n%7); day++ ){
            result += start_money;
            start_money++;
        }
        return result;
    }
};