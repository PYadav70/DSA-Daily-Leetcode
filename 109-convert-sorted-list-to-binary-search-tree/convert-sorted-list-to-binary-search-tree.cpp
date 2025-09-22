
class Solution {
public:
 TreeNode* sortedListToBST(ListNode* head) {
    if (!head) return nullptr;
    if (!head->next) return new TreeNode(head->val);

    ListNode* slow = head;
    ListNode* fast = head;
    ListNode* prev = nullptr;

    while (fast && fast->next) {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    // Disconnect left half from mid
    if (prev) prev->next = nullptr;

    TreeNode* root = new TreeNode(slow->val);

    // Left side should only be passed if prev != nullptr
    root->left = (slow != head) ? sortedListToBST(head) : nullptr;
    root->right = sortedListToBST(slow->next);

    return root;
}

};