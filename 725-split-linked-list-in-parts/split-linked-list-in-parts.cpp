
class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode* curr = head;
        int L = 0;

            while(curr != NULL){
                L++;
                curr = curr->next;
            }
            int eachBucketNode = L/k;
            int extraNodes = L%k;

            vector<ListNode*> result(k,NULL);

             curr = head;
            ListNode* prev = NULL;

            for(int i=0; i<k; i++){
                result[i] = curr;
                for(int count=1; count<=eachBucketNode + (extraNodes>0 ? 1:0); count++){
                    prev = curr;
                    curr = curr->next;
                }
                if(prev != NULL)
                prev->next = NULL;
                extraNodes--;
            }
            return result;
    }
};