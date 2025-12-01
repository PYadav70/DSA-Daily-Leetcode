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
   int maxDiff;
   void findDiffUtil(TreeNode* root, TreeNode* child){
    if( child == NULL){
        return;
    }
    maxDiff = max(maxDiff, abs(root->val - child->val));

    findDiffUtil(root, child->left);
    findDiffUtil(root, child->right);
   }

   void findMaxDiff(TreeNode * root){
    if(root == NULL){
        return;
    }
    findDiffUtil(root, root->left);
    findDiffUtil(root, root->right);

    findMaxDiff(root->left);
    findMaxDiff(root->right);
   }
    int maxAncestorDiff(TreeNode* root) {
         maxDiff = 0;

        findMaxDiff(root);
        return maxDiff;
    }
};