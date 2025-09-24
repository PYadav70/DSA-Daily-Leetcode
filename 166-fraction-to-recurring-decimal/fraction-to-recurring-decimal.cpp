class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        string result = "";
         if (numerator == 0) return "0";
         if ((numerator < 0) ^ (denominator < 0)){
            result += '-';
         }
        long long num = abs((long long)numerator);
        long long den = abs((long long)denominator);
        long long  digit = num/den;

        result += to_string(digit);
       
       long long remainder = num%den;

       if(remainder == 0){
          return result;
       }else{
        result.push_back('.');
       }

       unordered_map<long long, int> remainderIndex;

       while(remainder != 0){
        if(remainderIndex.count(remainder)){
            int pos = remainderIndex[remainder];
            result.insert(pos, "(");
            result.push_back(')');
            break;
        }
        remainderIndex[remainder] = result.length();
        remainder *= 10;
        result += to_string(remainder / den);
        remainder %= den;

       }

     return result;
       
        
    }
};