class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int n = s.size();
       unordered_map<char,int>mp;
       int length = 0;
       int left = 0;

        for(int right = 0; right<n; right++){
         mp[s[right]]++;

         while(mp[s[right]] > 1){
            mp[s[left]]--;
            left++;
         }
         length = max(length, right-left+1);

        }
        return length;
    }
};