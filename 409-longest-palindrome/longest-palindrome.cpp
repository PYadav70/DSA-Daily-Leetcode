class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.size();
        unordered_map<char, int>mp;
        

        for(int i=0; i<n; i++){
            mp[s[i]]++;
        }
        int longestLen = 0;
        bool oddfreq = false;
        for(auto & it : mp){
            if(it.second %2 == 0){
                longestLen += it.second;
            }else{
                longestLen += it.second-1;
                oddfreq = true;
            }
        }
        if(oddfreq){
            longestLen++;
        }
        return longestLen;
    }
};