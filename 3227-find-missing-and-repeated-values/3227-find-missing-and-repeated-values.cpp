class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int sum=0;
        vector<int>ans;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                sum=sum+grid[i][j];
                ans.push_back(grid[i][j]);
            }
        }
            sort(ans.begin(),ans.end());
            vector<int>res(2);
            for(int i=0;i<ans.size();i++)
            {
                if(i>0 && ans[i]==ans[i-1])
                {
                   res[0]=ans[i-1];
                }
            }
        int n=grid.size()*grid.size();
        int org=(n*(n+1))/2;
         int miss=org-sum+res[0];
        res[1]=miss;
        return res;  
    }
};