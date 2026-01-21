class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        int n = piles.size();
        priority_queue<int>maxHeap;

        for(int i = 0; i<n; i++){
           maxHeap.push(piles[i]); 
        }
        while(k--){
            int top = maxHeap.top();
            maxHeap.pop();

            int remaining = top-(top/2);
            maxHeap.push(remaining);
        }
        int sum = 0;
        while(!maxHeap.empty()){
            sum += maxHeap.top();
            maxHeap.pop();
        }
        return sum;
    }
};