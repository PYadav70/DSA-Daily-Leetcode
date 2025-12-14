/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int sumRoot(TreeNode* root, int newNumber){
        if(root == NULL){
            return 0;
        }
       int currentNumber = newNumber * 10 + root->val;

        if(root->left == NULL && root->right == NULL){
            return currentNumber;
        }

        return sumRoot(root->left, currentNumber) + sumRoot(root->right, currentNumber);

    }
    int sumNumbers(TreeNode* root) {
        
        return sumRoot(root,0);
    }
};