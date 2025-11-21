class Solution {
public:
    string reverseParentheses(string s) {
        // int n = s.length();
        stack<char>st;

       for(char ch : s){
        if(ch != ')'){
            st.push(ch);
        }else{
            string temp = "";
            while(!st.empty() && st.top() != '('){
                temp.push_back(st.top());
                st.pop();
            }
            if(!st.empty() && st.top() == '('){
                st.pop();
            }
            for(char c : temp){
                st.push(c);
            }
        }
       }
        string result = "";
        while(!st.empty()){
            result.push_back(st.top());
            st.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
};