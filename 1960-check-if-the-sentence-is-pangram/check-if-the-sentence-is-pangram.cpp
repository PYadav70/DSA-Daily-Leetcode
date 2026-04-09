class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n = sentence.size();
        vector<bool>seen(26,0);

        for(int i=0; i<n; i++){
            int index = sentence[i]-'a';
            seen[index] = true;
        }
        // checking character are there are not in index
        for(int i= 0; i<26; i++ ){
            if(seen[i] == false){
                return false;
            }
        }
        return true;
    }
};