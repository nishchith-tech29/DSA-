
class Solution {
public:
    int ans;
    
    void inorder(TreeNode* root, int &k) {
        if (root == nullptr)
            return;

        inorder(root->left, k);

        k--;
        if (k == 0) {
            ans = root->val;
            return;
        }

        inorder(root->right, k);
    }

    int kthSmallest(TreeNode* root, int k) {
        inorder(root, k);
        return ans;
    }
};
