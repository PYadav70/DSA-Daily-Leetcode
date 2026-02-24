class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        // if(n==0) return 0;
        // int longest =1;
        // unordered_set<int> st;
        // for(int i=0; i<n;i++){
        //     st.insert(nums[i]);
        // }
        // for(auto it : st){
        //     if(st.find(it-1)==st.end()){
        //         int count = 1;
        //         int x = it;
        //         while(st.find(x+1) != st.end()){
        //             x = x+1;
        //             count = count+1;
        //         }
        //         longest = max(longest, count); 
        //     }
        // }
        // return longest;
        unordered_set<int>st(nums.begin(), nums.end());
        int longest = 0;
        for(int num: st){
            if(!st.count(num-1)){
                int curr = num;
                int count = 1;

                while(st.count(curr+1)){
                    curr++;
                    count++;
                }
                longest = max(longest, count);
            }
        }
        return longest;
    }
};