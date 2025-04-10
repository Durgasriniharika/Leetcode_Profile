class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int min_diff=INT_MAX;
        for(int i=0;i<=nums.size()-k;i++){
            int maxi=INT_MIN,mini=INT_MAX;
            for(int j=i;j<i+k;j++){
                maxi=max(maxi,nums[j]);
                mini=min(mini,nums[j]);
            }
            min_diff=min(min_diff,maxi-mini);
        }
        return min_diff;
    }
};