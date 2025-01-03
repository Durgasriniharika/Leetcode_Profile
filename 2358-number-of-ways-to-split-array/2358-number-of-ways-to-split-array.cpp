class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n=nums.size();
       
        long long total=0;
        for(auto it:nums){
            total+=it;
        }
        
        long long splits=0;
        long long prefix=0;

        for(int i=0;i<nums.size()-1;i++){
            prefix+=nums[i];
            if(prefix>=(total-prefix)){
                splits++;
            }
        }
        return splits;
    }
};