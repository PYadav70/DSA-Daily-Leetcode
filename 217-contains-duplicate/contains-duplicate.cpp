class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>element;

        for(int num : nums){
            if(element.count(num)){
                return true;
            }
            element.insert(num);
        }
        return false;
    }
};