class Solution {
public:
    int nthMagicalNumber(int n, int a, int b) {
        int mod=1e9+7;
        long long low=1;
        long long high=1e18;
        long long Lcm=(a*b)/__gcd(a,b);
        while(low<high){
            long long mid=low+(high-low)/2;
            long long cnt=(mid/a)+(mid/b)-mid/(Lcm);
            if(cnt>=n){
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        return low%mod;
    }
};