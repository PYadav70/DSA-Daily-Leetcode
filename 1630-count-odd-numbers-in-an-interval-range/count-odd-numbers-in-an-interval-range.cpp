class Solution {
public:
    int countOdds(int low, int high) {
        if(high == 0){
            return 0;
        }
        int oddCount = 0;
        for(int i = low; i<=high; i++){
            if(i % 2 != 0 ){
                oddCount++;
            }
        }
        return oddCount;
    }
};