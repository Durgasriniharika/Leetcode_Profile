class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int n=nums.size();
        vector<int>prefix(n+1,0);
        for(int i=0;i<n;i++){
            prefix[i+1]=prefix[i]+nums[i];
        }
        int total_sum=0;
        for(int i=0;i<n;i++){
            int start=max(0,i-nums[i]);
            total_sum+=prefix[i+1]-prefix[start];
        }
        return total_sum;
    }
};