class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {
        vector<int> result;
        int m = grid.size();
        if (m == 0)
            return result;
        int n = grid[0].size();

        bool leftToRight = true;
        int cellCount = 0;

        for (int i = 0; i < m; ++i) {
            if (leftToRight) {
                for (int j = 0; j < n; ++j) {
                    if (cellCount % 2 == 0) {
                        result.push_back(grid[i][j]);
                    }
                    cellCount++;
                }
            } else {
                for (int j = n - 1; j >= 0; --j) {
                    if (cellCount % 2 == 0) {
                        result.push_back(grid[i][j]);
                    }
                    cellCount++;
                }
            }
            leftToRight = !leftToRight;
        }

        return result;
    }
};