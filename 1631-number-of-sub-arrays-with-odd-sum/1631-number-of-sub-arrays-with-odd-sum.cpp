class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int mod=1e9+7;
        unordered_map<int,int>mp;
         mp[0]=1;
        int prefix_sum=0,cnt=0;
        for(int i=0;i<arr.size();i++){
            prefix_sum+=arr[i];
            int res=prefix_sum%2;
            cnt=(cnt+mp[1-res])%mod;
            mp[res]++;
        }
        return cnt;
    }
};