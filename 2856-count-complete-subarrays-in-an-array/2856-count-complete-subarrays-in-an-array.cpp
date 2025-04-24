class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            unordered_set<int>st1;
            for(int j=i;j<nums.size();j++){
                st1.insert(nums[j]);
                if(st1.size()==st.size()){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};