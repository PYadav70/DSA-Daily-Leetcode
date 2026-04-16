class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.length();

        vector<char> vowel = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int mid = n / 2;
        int count1 = 0;
        int count2 = 0;

        for (int i = 0; i < n; i++) {
           if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
               s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
                if (i < mid) {
                    count1++;
                } else {
                    count2++;
                }
            }
           }
          return count1 == count2;
   }
};
