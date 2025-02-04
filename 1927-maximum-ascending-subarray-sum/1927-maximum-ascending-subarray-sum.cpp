class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int sum=0,curr=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                curr+=nums[i];
            }
            else{
                sum=max(sum,curr);
                curr=nums[i];
            }
        }
        return max(curr,sum);
    }
};