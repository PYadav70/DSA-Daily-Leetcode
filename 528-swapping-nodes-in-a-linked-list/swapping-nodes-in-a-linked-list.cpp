
class Solution {
public:
    // int findLength(ListNode* head){
    //     int l = 0;
    //     while(head != NULL){
    //         head = head->next;
    //         l++;
    //     }
    //       return l;
    // }
    ListNode* swapNodes(ListNode* head, int k) {
        // int L = findLength(head);
        // int k1 = k;
        // ListNode* Node1 = head;

        // while(k1>1){
        //     Node1 = Node1->next;
        //     k1--;
        // }

        //  int k2 = L-k+1;
        // ListNode* Node2 = head;

        // while(k2>1){
        //     Node2 = Node2->next;
        //     k2--;
        // }

        // swap(Node1->val, Node2->val);

        // return head;
        ListNode* p1 = NULL;
        ListNode* p2 = NULL;
        ListNode* temp   =  head;

        while(temp != NULL){
            if(p2 != NULL){
                p2 = p2->next;
            }
            k--;
            if(k==0){
                p1 = temp;
                p2 = head;
            }
            temp = temp->next;
        }
        swap(p1->val, p2->val);

        return head;
        
    }
};