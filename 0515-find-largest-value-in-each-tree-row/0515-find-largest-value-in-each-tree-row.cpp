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
    void dfs(TreeNode* node,vector<int>& arr,int depth){
        if(!node) return;
        if(depth==arr.size()){
            arr.push_back(node->val);
        }
        else{
            arr[depth]=max(arr[depth],node->val);
        }
        dfs(node->left,arr,depth+1);
        dfs(node->right,arr,depth+1);
    }
    vector<int> largestValues(TreeNode* root) {
        vector<int>arr;
        dfs(root,arr,0);
        return arr;
    }
};