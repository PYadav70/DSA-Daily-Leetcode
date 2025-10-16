class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        vector<int>count(value,0);
        int n = nums.size();

        for(int i=0; i<n; i++){
            int rem = ((nums[i] %value)+value)%value;
            count[rem]++;
        }

        int mexCount = 0;
        while(true){
            int rem = mexCount%value;
            if(count[rem]==0){
                break;
            }
            count[rem]--;
            mexCount++;
        }

     return mexCount;
        
    }
};