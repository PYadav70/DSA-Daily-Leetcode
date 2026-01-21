class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n = stones.size();

        priority_queue<int>maxHeap;

        for(int i = 0 ; i<n; i++){
            maxHeap.push(stones[i]);
        }
        while(maxHeap.size() > 1){
            int y = maxHeap.top();
            maxHeap.pop();
            int x = maxHeap.top();
            maxHeap.pop(); 

            if(y!=x){
                maxHeap.push(y-x);
            }
        }
        return maxHeap.empty()?0 : maxHeap.top(); 
        
    }
};