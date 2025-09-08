class Solution {
public:
    bool checkNoZero(int num ){
        while(num>0){
            int digit = num%10;
            if(digit==0){
                return false;
            }else{
                num  = num/10;
            }
            
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n) {
        vector<int>result;

        for(int a=1; a<n; a++){
            int b = n-a;

           if(checkNoZero(a) && checkNoZero(b)){
            result.push_back(a);
            result.push_back(b);
            break;
           }
        }

        return result;
        
    }
};