class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        vector<long long>cnt(n+1,0);
        for(int i=0;i<queries.size();i++){
                int first=queries[i][0];
                int last=queries[i][1];
                cnt[first]+=1;
                if(last+1<n){
                    cnt[last+1]-=1;
                }
        }
        for(int i=1;i<n;i++){
            cnt[i]+=cnt[i-1];
        }
        for(int i=0;i<nums.size();i++){
           if(cnt[i]<nums[i]){
                return false;
           }
        }
        return true;
    }
};