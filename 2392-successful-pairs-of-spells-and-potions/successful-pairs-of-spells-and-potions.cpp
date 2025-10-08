class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        //brute force
    // vector<int>result;

    // int n = spells.size();
    // int m = potions.size();

    // for(int i = 0; i<n; i++){
    //      int pairs = 0;
    //     for(int j=0; j<m; j++){
    //        long long product = 1LL * spells[i]* potions[j];
    //         if(success <= product){
    //             pairs++;
    //         }
    //     }
    //      result.push_back(pairs);
    //   }
    //     return result;

    int n = spells.size();
    int m = potions.size();

    sort(begin(potions), end(potions));
    int maxPotionValue = potions[m-1];

    vector<int> answer;

    for(int i=0; i<n; i++){
        int spell = spells[i];

        long long minPotion = ceil((1.0*success)/spell);

        if(minPotion > maxPotionValue){
            answer.push_back(0);
            continue;
        }
        int index = lower_bound(begin(potions), end(potions), minPotion)- begin(potions);
        int count = m-index;
        answer.push_back(count);
    }
    return answer;
    }
};