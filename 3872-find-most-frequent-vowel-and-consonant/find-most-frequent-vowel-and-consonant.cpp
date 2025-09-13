class Solution {
public:
    bool isVowel(char ch){
        ch = tolower(ch);
        return (ch== 'a' || ch== 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    }
    int maxFreqSum(string s) {
        vector<int>freq(26,0);
       
     for(char ch:s){
        freq[ch-'a']++;
     }

     int maxVowelFreq = 0;
     for(char v : {'a','e','i','o','u'}){
        maxVowelFreq = max(maxVowelFreq, freq[v - 'a']);
     }

     int maxConsFreq = 0;
     for(int i=0; i<26; i++){
        char ch = 'a' + i;
        if(!isVowel(ch)){
         maxConsFreq = max(maxConsFreq, freq[i]);
        }
       
     }
        

        return maxVowelFreq+maxConsFreq;  
        
    }
};