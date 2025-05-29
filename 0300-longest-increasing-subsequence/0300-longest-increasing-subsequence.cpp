class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>res;
        for(int i=0;i<nums.size();i++){
            int idx=lower_bound(res.begin(),res.end(),nums[i])-res.begin();
            if(idx==res.size()){
                res.push_back(nums[i]);
            }
            else{
                res[idx]=nums[i];
            }
        }
        return res.size();
    }
};