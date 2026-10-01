class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.size();
        string ans = "";
        int counter = 0;

        for(int i=0; i<n; i++){
            if(s[i] == '('){
            if(counter > 0){
                ans.push_back(s[i]);
            }
            counter++;
        }else {
            counter--;
            if(counter > 0){
                ans.push_back(s[i]);
            }
        }
    }
    return ans;
  }
};