
class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
        int prefixSum = 0;
        unordered_map<int, ListNode*>mp;
        ListNode* dummyNode = new ListNode(0);
        dummyNode->next = head;
        mp[0] = dummyNode;

        while(head != NULL){
            prefixSum += head->val;

            if(mp.find(prefixSum) != mp.end()){
                ListNode* start = mp[prefixSum];
                ListNode* temp = start;
                int currPreSum = prefixSum;

                while(temp != head){
                    temp = temp->next;
                    currPreSum += temp->val;

                    if(temp != head)
                    mp.erase(currPreSum);
                }
                start->next = head->next;

            }else{
                mp[prefixSum] = head;
            }
            head = head->next;
         
        }
        return dummyNode->next;
    }
};