class Solution {
public:
    int minimumTeachings(int n, vector<vector<int>>& languages, vector<vector<int>>& friendships) {
        unordered_set<int>sadUsers;

        for(auto & friends : friendships){
            int u = friends[0]-1;
            int v = friends[1]-1;

            unordered_set<int> langSet(begin(languages[u]), end(languages[u]));
            bool canTalk = false;
            for(int lang : languages[v]){
                if(langSet.count(lang)){
                    canTalk = true;
                    break;
                }
            }
            if(!canTalk){
                sadUsers.insert(u);
                sadUsers.insert(v);
            }
        }
         vector<int> language(n+1, 0);
         int mostKnowingLang = 0;

         for(int user : sadUsers){
            for(int lang : languages[user]){
                language[lang]++;
                mostKnowingLang = max(mostKnowingLang, language[lang]);
            }
         }

         return sadUsers.size()-mostKnowingLang;
    }
};