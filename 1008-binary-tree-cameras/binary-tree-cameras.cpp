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
    vector<int>dfs(TreeNode* node){
        if(node == NULL){
            return { 100000, 0,0};
        }
        vector<int>left = dfs(node->left);
        vector<int>right = dfs(node->right);

        vector<int>dp(3);
        //state 0 : camera has current node
        dp[0] = 1 + min(left[0] , min(left[1], left[2]))
                + min(right[0] , min(right[1], right[2]));

        // state 1 : camera is covered by child
        dp[1] = min(left[0] + min(right[0], right[1]), right[0] + min(left[0], left[1]));

        //state 2 : current node covered by parent
          dp[2] = min(left[0], left[1]) + min(right[0], right[1]);
                                      

        return dp;        
    }
    int minCameraCover(TreeNode* root) {
        vector<int>ans = dfs(root);

        return min(ans[0], ans[1]);
    }
};