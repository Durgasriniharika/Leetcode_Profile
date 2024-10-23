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

     bool dfs(TreeNode* node, TreeNode* parent, int depth, int x, int y, int& xDepth, int& yDepth, TreeNode*& xParent, TreeNode*& yParent) {
        if (!node) return false;

        if (node->val == x) {
            xParent = parent;
            xDepth = depth;
        } else if (node->val == y) {
            yParent = parent;
            yDepth = depth;
        }

        if (xParent && yParent) return true;

        bool left = dfs(node->left, node, depth + 1, x, y, xDepth, yDepth, xParent, yParent);
        bool right = dfs(node->right, node, depth + 1, x, y, xDepth, yDepth, xParent, yParent);

        return left || right;
    }

    bool isCousins(TreeNode* root, int x, int y) {
        TreeNode* xParent = nullptr;
        TreeNode* yParent = nullptr;
        int xDepth = -1, yDepth = -1;

        dfs(root, nullptr, 0, x, y, xDepth, yDepth, xParent, yParent);

        return (xDepth == yDepth) && (xParent != yParent);
    }
};