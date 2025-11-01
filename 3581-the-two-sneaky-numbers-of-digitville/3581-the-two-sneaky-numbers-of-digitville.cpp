class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        map<int,int>mp;
        for(auto it:nums){
            mp[it]++;
        }
        vector<int>res;
        for(auto num:mp){
            if(num.second>1){
                res.push_back(num.first);
            }
        }
        return res;
    }
};