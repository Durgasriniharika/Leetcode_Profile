class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int i=0,j=0,maxi=0,mask=0;
        while(j<nums.size()){
            while((mask&nums[j])!=0){
                mask^=nums[i];
                i++;
            }
            mask|=nums[j];
            maxi=max(maxi,j-i+1);
            j++;
        }
        return maxi;
    }
};