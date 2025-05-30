class Solution {
public:
    bool isSplit(vector<int>&nums,int maxi,int k){
        int cnt=1,sum=0;
        for(auto it:nums){
            if(sum+it>maxi){
                cnt++;
                sum=it;
            }
            else{
                sum+=it;
            }
        }
        return cnt<=k;
    }
    int splitArray(vector<int>& nums, int k) {
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
        while(low<high){
            int mid=low+(high-low)/2;
            if(isSplit(nums,mid,k)){
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};