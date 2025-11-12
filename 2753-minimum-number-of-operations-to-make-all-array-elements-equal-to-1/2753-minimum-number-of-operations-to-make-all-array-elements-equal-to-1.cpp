class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        int gcd_all=nums[0];
        for(int i=1;i<n;i++){
            gcd_all=__gcd(gcd_all,nums[i]);
        }
        if(gcd_all>1) return -1;

        int cnt=count(nums.begin(),nums.end(),1);
        if(cnt>0) return n-cnt;

        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            int m=nums[i];
            for(int j=i+1;j<n;j++){
                m=__gcd(m,nums[j]);
                if(m==1){
                    ans=min(ans,j-i);
                    break;
                }
            }
        }
        return ans+n-1;
    }
};