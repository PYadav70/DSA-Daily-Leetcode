
class Solution {
public:
    int getLengthOfList(ListNode* head){
        int length = 0;

        while(head != NULL){
            length++;
            head = head->next;
        }
        return length;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       int L = getLengthOfList(head);
       if(L==n){
        ListNode* temp = head->next;
        delete(head);
        return temp;
       }
       int travel_front = L-n;
       ListNode* temp = head;
       ListNode* prev = NULL;

       while(travel_front--){
        prev = temp;
        temp = temp->next;
       }
       prev->next = temp->next;

       delete(temp);
       return head;
    }
};