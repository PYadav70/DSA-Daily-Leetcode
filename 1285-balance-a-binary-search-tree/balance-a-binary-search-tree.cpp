class Solution {
public:
    void inorder(TreeNode* root, vector<int>& nodes) {
        if (!root)
            return;

        inorder(root->left, nodes);
        nodes.push_back(root->val);
        inorder(root->right, nodes);
    }

    TreeNode* build(int l, int r, vector<int>& nodes) {
        if (l > r)
            return NULL;

        int mid = (l + r) / 2;

        TreeNode* root = new TreeNode(nodes[mid]);

        root->left = build(l, mid - 1, nodes);
        root->right = build(mid + 1, r, nodes);

        return root;
    }

    TreeNode* balanceBST(TreeNode* root) {

        vector<int> nodes;

        inorder(root, nodes);

        return build(0, nodes.size() - 1, nodes);
    }
};
