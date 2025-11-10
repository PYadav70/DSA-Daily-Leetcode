class Solution {
public:
     
    int minOperations(vector<int>& nums) {
    // brute force
    //     unordered_set<int>st(begin(nums), end(nums));
    //     int n = nums.size();
    //     int minOps = 0;

    //     for(int target : st){
    //         if(target == 0){
    //             continue;
    //         }
    //         bool flow = false;
    //         for(int i = 0; i<n; i++){
    //             if(nums[i] == target){
    //                 if(!flow){
    //                     flow = true;
    //                     minOps++;
    //                 }
    //             }else if(nums[i]<target){
    //                 flow = false;
    //             }
    //         }
    //     }
    //     return minOps;
      int n = nums.size();
      stack<int>st;
      int minOps = 0;
     for(int i=0; i<n; i++){
         while(!st.empty() && st.top() > nums[i]){
            st.pop();
         }
         if(nums[i] == 0){
            continue;
         }
         if(st.empty() || st.top() < nums[i]){
            st.push(nums[i]);
            minOps++;
         }
     }

     return minOps;
     }
};