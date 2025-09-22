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
    ListNode* reverseLinked(ListNode* head){
        ListNode* prev = NULL;
        ListNode* curr = head;
       

        while(curr !=NULL){
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        } 
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return true;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prevSlow  = NULL;

        while(fast !=NULL && fast->next !=NULL){
            prevSlow = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        if (fast != NULL) { 
            slow = slow->next;
        }
        
       
        ListNode* reverseHead = reverseLinked(slow);

        //comparison
        ListNode* temp1 = head;
        ListNode* temp2 = reverseHead;

        while(temp2 !=NULL){
            if(temp1->val != temp2->val){
                return false;
            }else{
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
        }

        return true;
        
    }
};