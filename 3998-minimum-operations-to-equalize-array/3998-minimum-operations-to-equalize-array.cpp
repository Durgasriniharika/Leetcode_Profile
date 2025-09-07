class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto it:nums){
            mp[it]++;
        }
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]]==nums.size()){
                return 0;
            }
        }
        return 1;
    }
};