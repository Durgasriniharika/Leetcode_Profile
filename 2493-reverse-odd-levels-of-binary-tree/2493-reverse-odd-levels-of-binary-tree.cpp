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
    void dfs(TreeNode* leftNode,TreeNode* rightNode,int level){
        if(!leftNode || !rightNode) return;
        if(level%2==1) swap(leftNode->val,rightNode->val);
        dfs(leftNode->left,rightNode->right,level+1);
        dfs(leftNode->right,rightNode->left,level+1);
    }
    TreeNode* reverseOddLevels(TreeNode* root) {
        if(!root) return root;
        dfs(root->left,root->right,1);
        return root;
    }
};