class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int c1=0, c2=0;
        for (int i=0;i<nums.size();i++) {
            if(nums[i]<0){
                c1++;
            }
            if(nums[i]>0)
            {
                c2++;
            }
        }
        return max(c1,c2);
}
}
;