class Solution {
public:
    vector<int> pre;

    void preorder(TreeNode* node) {
        if (node == NULL)
            return;

        pre.push_back(node->val);
        preorder(node->left);
        preorder(node->right);
    }

    vector<int> preorderTraversal(TreeNode* root) {
        preorder(root);
        return pre;
    }
};