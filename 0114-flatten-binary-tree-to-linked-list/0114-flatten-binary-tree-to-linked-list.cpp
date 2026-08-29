/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    void preorder(TreeNode* root, vector<int>& ans) {
        if (root == nullptr)
            return;

        ans.push_back(root->val);
        preorder(root->left, ans);
        preorder(root->right, ans);
    }
    void flatten(TreeNode* root) {

        if (root == nullptr ||
            (root->left == nullptr && root->right == nullptr)) {
            // return root;
        }

        vector<int> ans;
        preorder(root, ans);
        int n = ans.size();

        TreeNode* temp = root;

        for (int i = 1; i < n; i++) {
            
            temp->left = nullptr;
            TreeNode* demo = new TreeNode(ans[i]);
            temp->right = demo;

            temp = temp->right;
        }
        // return root;
    }
};