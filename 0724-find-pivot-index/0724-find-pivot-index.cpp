class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total=0;
        for(auto it:nums){
            total+=it;
        }
        int prefix=0;
        //int idx=-1;
        for(int i=0;i<nums.size();i++){
            prefix+=nums[i];
            int suffix=total-prefix;
            prefix-=nums[i];
            if(prefix==suffix){
                return i;
            }
            prefix+=nums[i];
        }
        return -1;
    }
};