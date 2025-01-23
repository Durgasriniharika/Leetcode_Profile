class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();

        unordered_map<int,int>rowcnt,colcnt;
        vector<pair<int,int>>res;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    res.push_back({i,j});
                    rowcnt[i]++;
                    colcnt[j]++;
                }
            }
        }

        int cnt=0;
        for(auto it:res){
            int row=it.first;
            int col=it.second;

            if(rowcnt[row]>1 || colcnt[col]>1){
                cnt++;
            }
        }
        return cnt;
    }
};