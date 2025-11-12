class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();

        //1. Calculate gcd of complete array
        int gcd_all=nums[0];
        for(int i=1;i<n;i++){
            gcd_all=__gcd(gcd_all,nums[i]);
        }
        //if it doesn't contain single one then it is impossible to make it one for any subarray so return -1
        if(gcd_all>1) return -1;

        //2. Calculate no.of ones present intially in the given array in order to make other numbers to one
        int cnt=count(nums.begin(),nums.end(),1);
        //to get the remaining non-one numbers that is equal to min_opertion cnt
        if(cnt>0) return n-cnt;

        //3. Calculate the min_op cnt to make the complete array to ones
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
        //remaining check
        return ans+n-1;
    }
};