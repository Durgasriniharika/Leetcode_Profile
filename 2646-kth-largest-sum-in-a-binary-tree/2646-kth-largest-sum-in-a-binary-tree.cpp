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

    void dfs(TreeNode* root, int level,map<int,long long>&sums){

        if(!root) return;

        sums[level]+=root->val;

        dfs(root->left,level+1,sums);

        dfs(root->right,level+1,sums);

    }

    long long kthLargestLevelSum(TreeNode* root, int k) {

        map<int,long long>sums;

         dfs(root,0,sums);

        vector<long long>large_sum;

        for(auto it:sums){

            large_sum.push_back(it.second);
        }

        sort(large_sum.rbegin(),large_sum.rend());

        if(large_sum.size()<k) return -1;

        return large_sum[k-1];
    }
};