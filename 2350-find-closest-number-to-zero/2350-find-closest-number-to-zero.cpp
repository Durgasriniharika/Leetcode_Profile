class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int mini=INT_MAX;
        int close=0;
        for(int i=0;i<nums.size();i++){
            int diff=abs(nums[i]-0);
            if(diff<mini){
                mini=diff;
                close=nums[i];
            }
            else if(diff==mini){
                close=max(close,nums[i]);
            }
        }
        return close;
    }
};