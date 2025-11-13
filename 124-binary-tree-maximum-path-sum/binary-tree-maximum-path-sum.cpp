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
    int maxSum;
    int solve(TreeNode* root){
        if(root == NULL){
            return 0;
        }
        int l = solve(root->left);
        int r = solve(root->right);

        int niche_mil_gya = l + r + root->val;
        int koi_ek_achha  = max(l,r)+root->val;
        int sirf_root_achha = root->val;

        maxSum = max({maxSum,niche_mil_gya,koi_ek_achha,sirf_root_achha});

        return max(koi_ek_achha, sirf_root_achha);


    }
    int maxPathSum(TreeNode* root) {
        maxSum = INT_MIN;

        solve(root);

        return maxSum;
              
    }
};