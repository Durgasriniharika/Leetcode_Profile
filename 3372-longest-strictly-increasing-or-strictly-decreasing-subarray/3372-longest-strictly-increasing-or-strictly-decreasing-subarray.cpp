class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        if(nums.size()<=1) return nums.size();
        int i_l=1;
        int d_l=1;
        int maxi=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>nums[i-1])
            {
                i_l++;
                d_l=1;
            }
            else if(nums[i]<nums[i-1])
            {
                d_l++;
                i_l=1;
            }
            else
            {
                i_l=1;
                d_l=1;
            }
            maxi = max(maxi, max(i_l, d_l));

        }
         return maxi;
    }
};