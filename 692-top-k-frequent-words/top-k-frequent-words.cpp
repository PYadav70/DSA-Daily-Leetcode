class Solution {
public:
    typedef pair<int, string> P;
    vector<string> topKFrequent(vector<string>& words, int k) {
        int n = words.size();
        unordered_map<string, int> mp;

        for (int i = 0; i < n; i++) {
            mp[words[i]]++;
        }
        auto cmp =
            [](const pair<string, int>& a, const pair<string, int>& b) {
                if (a.second == b.second) {
                    return a.first < b.first;
                }
                return a.second > b.second;
            };         
            priority_queue<pair<string,int>,vector<pair<string,int>>,decltype(cmp)>pq(cmp);                                            
            for(auto &it : mp){
                pq.push(it);

                if(pq.size() > k){
                  pq.pop();
                }
            }
            vector<string>result;
            while(!pq.empty()){
                result.push_back(pq.top().first);
                pq.pop();
            }
            reverse(result.begin(), result.end());
            return result;
    }
};    