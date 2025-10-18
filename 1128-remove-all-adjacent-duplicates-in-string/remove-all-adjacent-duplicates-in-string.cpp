class Solution {
public:
    string removeDuplicates(string s) {
    //     string ans = "";
    //     int i=0;

    //     while(i<s.length() ){

    //         if(ans.length()>0){
    //             if(ans[ans.length() - 1]== s[i]){
    //             ans.pop_back();
    //         }else{
    //             ans.push_back(s[i]);
    //         }
    //     }else{
    //         ans.push_back(s[i]);
    //     }
    //     i++;
    //    } 
    //    return ans;

     stack<char>st;
     int n = s.length();
     string result = "";

     for(int i=0; i<n; i++){
        if(st.empty() || st.top() != s[i]){
            st.push(s[i]);
        }else{
            st.pop();
        }
     }
     while(!st.empty()){
        result.push_back(st.top());
        st.pop();
     }

       reverse(result.begin(), result.end()); 
       return result;
    }
};