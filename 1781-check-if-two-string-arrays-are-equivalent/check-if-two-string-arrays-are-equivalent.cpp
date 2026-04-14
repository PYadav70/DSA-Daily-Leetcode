class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string result1 = "";
        string result2 = "";

        for(auto s : word1){
            result1 += s;
        }
        for(auto s : word2){
           result2 += s;
        }

        if(result1 == result2){
            return true;
        }else{
            return false;
        }   
    }
};