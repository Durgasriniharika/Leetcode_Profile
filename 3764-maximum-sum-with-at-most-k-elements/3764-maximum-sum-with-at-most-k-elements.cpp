class Solution {
public:
    long long maxSum(vector<vector<int>>& grid, vector<int>& limits, int k) {
        int n=grid.size();
        int m=grid[0].size();
        vector<int>res;
        for(int i=0;i<n;i++){
            sort(grid[i].rbegin(),grid[i].rend());
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<min(m,limits[i]);j++){
                res.push_back(grid[i][j]);
            }
        }
        sort(res.rbegin(),res.rend());
        long long maxi=0;
        for(int i=0;i<min(k,(int)res.size());i++){
            maxi+=res[i];
        }
        return maxi;
    }
};