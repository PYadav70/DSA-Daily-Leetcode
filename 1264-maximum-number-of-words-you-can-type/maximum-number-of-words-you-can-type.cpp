class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        // unordered_set<char>brokenSet;
        // int count =0;
        // string tempWord = "";

        // for(char ch: brokenLetters){
        //     brokenSet.insert(ch);
           
        // }
        //  bool canType = false;
        //  for(char ch: text){
        //    if(ch != ' '){
        //     tempWord += ch;
        //    }
        //    for(char ch: tempWord){
        //     if(canType==brokenSet)
        //     canType = true;
        //     break;
        //    }else{
        //     count++;
        //    }
           
        //  }
        //  return count;
       bool mp[26];
       for(char &ch:brokenLetters){
        mp[ch-'a'] = true;
       }
       int result = 0;
       bool canType = true;

       for(char &ch:text){
        if(ch == ' '){
            if(canType){
                result++;
            }
            canType = true;
        }else if(mp[ch-'a']==true){
            canType = false;
        }
       }
       if(canType){
        result++;
       }
       return result;

    }
};