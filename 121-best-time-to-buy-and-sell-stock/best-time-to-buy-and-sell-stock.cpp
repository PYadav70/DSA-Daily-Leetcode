class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if(n==0){
            return 0;
        }
        int maxprofit = 0;
        int left = 0;
        int right = 1;

        while(right < n){
           if(prices[left] < prices[right]){
            int todayprofit = prices[right] - prices[left];
            maxprofit = max(maxprofit, todayprofit);
           }else{
            left = right;
           }
           right++;
        }
        return maxprofit;
    }
};