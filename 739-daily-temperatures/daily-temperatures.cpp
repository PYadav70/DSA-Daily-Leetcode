class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int>result(n,0);
        stack<int>st;

        for(int i=0; i<n; i++){
            while(!st.empty() &&  temperatures[i] > temperatures[st.top()]){
                int day = st.top();
                st.pop();
                result[day] = i-day;
            }
            st.push(i);
        }
        return result;

    }
};