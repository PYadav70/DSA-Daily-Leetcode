class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
       int bottleDrink = 0;
       int emptyBottle = 0;
       
       while(numBottles>0){
         bottleDrink += numBottles;
         emptyBottle += numBottles;
         numBottles = 0;

       int newFullBottle = emptyBottle/numExchange;
         emptyBottle %= numExchange;
         numBottles = newFullBottle;

       }
       return bottleDrink;
        
    }
};