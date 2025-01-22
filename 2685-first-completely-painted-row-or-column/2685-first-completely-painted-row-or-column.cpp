class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

        vector<int> rowPainted(m, 0);
        vector<int> colPainted(n, 0);
        unordered_map<int, pair<int, int>> valueToPosition;

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                valueToPosition[mat[i][j]] = {i, j};
            }
        }

        for (int i = 0; i < arr.size(); ++i) {
            int num = arr[i];
            auto [row, col] = valueToPosition[num];
            rowPainted[row]++;
            colPainted[col]++;

            if (rowPainted[row] == n || colPainted[col] == m) {
                return i;
            }
        }

        return -1;
    }
};