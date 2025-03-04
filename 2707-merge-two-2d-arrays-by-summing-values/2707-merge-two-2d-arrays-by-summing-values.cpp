class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        map<int,int>mp;
        for(auto num1:nums1){
            mp[num1[0]]+=num1[1];
        }
        for(auto num2:nums2){
            mp[num2[0]]+=num2[1];
        }
        vector<vector<int>>res;
        for(auto it:mp){
            res.push_back({it.first,it.second});
        }
        return res;
    }
};