
class Solution {
public:
 TreeNode* sortedListToBST(ListNode* head) {
    if (!head) return NULL;
    if (!head->next) return new TreeNode(head->val);

    ListNode* slow = head;
    ListNode* fast = head;
    ListNode* prevSlow =NULL;

    while (fast && fast->next) {
        prevSlow = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

   
   

    TreeNode* root = new TreeNode(slow->val);
    prevSlow->next = NULL;
    root->left =  sortedListToBST(head);
    root->right = sortedListToBST(slow->next);

    return root;
}

};