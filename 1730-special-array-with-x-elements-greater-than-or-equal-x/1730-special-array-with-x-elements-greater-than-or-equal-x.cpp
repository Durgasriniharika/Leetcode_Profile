class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int x=0;x<=n;x++){
            int low=0,high=n-1;
            while(low<=high){
                int mid=low+(high-low)/2;
                if(nums[mid]>=x){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            int cnt=n-low;
            if(cnt==x){
                return x;
            }
        }
        return -1;
    }
};