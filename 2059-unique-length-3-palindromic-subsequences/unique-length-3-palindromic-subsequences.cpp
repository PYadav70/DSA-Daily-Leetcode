class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n = s.length();
        unordered_set<char>words;

        for(int i = 0; i<n ; i++){
            words.insert(s[i]);
        }

        int result = 0;

        for(char word : words ){

         int left_idx = -1;
         int right_idx = -1;

         for(int i = 0; i<n; i++){
            if(s[i] == word){
                if(left_idx == -1){
                    left_idx = i;
                }
                right_idx = i;
            }
         }
         unordered_set<char>st;
         for(int middle = left_idx+1; middle <= right_idx-1; middle++){
            st.insert(s[middle]);
         }
         result += st.size();

        }
        return result;
    }
};