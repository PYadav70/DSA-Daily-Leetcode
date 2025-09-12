class Solution {
public:
    bool isVowel(char ch){
        ch = tolower(ch);

        return (ch== 'a' || ch== 'e' || ch=='i'|| ch=='o' || ch=='u');
    }
    bool doesAliceWin(string s) {

        // string vowel = {'a', 'e', 'i', 'o', 'u'};
        int count  = 0;

        for(char ch : s){
           if(isVowel(ch)){
             return true;
           }
             }
        return false;
        
    }
};