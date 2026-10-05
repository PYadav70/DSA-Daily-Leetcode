class Solution {
public:
    int totalFruit(vector<int>& fruits) {
      int n = fruits.size();
      unordered_map<int, int>mp;
      int maxFruit = 0;
      int left = 0;

      for(int right=0; right<n; right++){
         mp[fruits[right]]++;

         if(mp.size()<=2){
            maxFruit = max(maxFruit, right-left+1);
         }else{
            mp[fruits[left]]--;
            if(mp[fruits[left]] == 0){
                mp.erase(fruits[left]);
            }
            left++;
         }
      }
      return maxFruit;

    }
};