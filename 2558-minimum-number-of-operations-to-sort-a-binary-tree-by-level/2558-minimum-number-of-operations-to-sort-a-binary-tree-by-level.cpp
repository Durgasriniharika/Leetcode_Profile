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
    int minimumOperations(TreeNode* root) {
        if (!root)
            return 0;
        queue<TreeNode*> q;
        q.push(root);
        int operations = 0;

        while (!q.empty()) {
            int size = q.size();
            vector<int> levelValues;
            for (int i = 0; i < size; ++i) {
                TreeNode* node = q.front();
                q.pop();
                levelValues.push_back(node->val);
                if (node->left)
                    q.push(node->left);
                if (node->right)
                    q.push(node->right);
            }

            vector<int> sortedValues = levelValues;
            sort(sortedValues.begin(), sortedValues.end());
            vector<int> visited(levelValues.size(), 0);

            for (int i = 0; i < levelValues.size(); ++i) {
                if (visited[i] || levelValues[i] == sortedValues[i])
                    continue;
                int cycleSize = 0, x = i;
                while (!visited[x]) {
                    visited[x] = 1;
                    x = find(sortedValues.begin(), sortedValues.end(),
                             levelValues[x]) -
                        sortedValues.begin();
                    cycleSize++;
                }
                if (cycleSize > 1)
                    operations += (cycleSize - 1);
            }
        }

        return operations;
    }
};