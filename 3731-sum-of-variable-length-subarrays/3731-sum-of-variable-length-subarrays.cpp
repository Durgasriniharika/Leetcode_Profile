class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int total_sum=0;
        for(int i=0;i<nums.size();i++){
            int start=max(0,i-nums[i]);
            for(int j=start;j<=i;j++){
                total_sum+=nums[j];
            }
        }
        return total_sum;
    }
};