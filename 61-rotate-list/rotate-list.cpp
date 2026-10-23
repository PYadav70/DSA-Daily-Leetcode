/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL || k ==0){
            return head;
        }
        //finding the length and tail
        int len = 1;
        ListNode* tail = head;
        while(tail->next != nullptr){
            tail = tail->next;
            len++;
        }
        //remove unnecessary rotation
        k = k%len;
        if(k == 0){
            return head;
        }
        //make the list circular
        tail->next = head;

        // find the new tail
        int steps = len-k;
        ListNode* newTail = head;
        for(int i=1; i<steps; i++){
            newTail = newTail->next;
        }
        // get the newhead and break the circle
        ListNode* newHead = newTail->next;
        newTail->next = nullptr;
        return newHead;
    }
};