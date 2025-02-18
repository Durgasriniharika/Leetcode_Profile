class Solution {
public:
    const int mod=1e9+7;
    const int base=31;
    string shortestPalindrome(string s) {
        int n=s.size();
        long long forwardHash=0,backwardHash=0,power=1;
        int maxi=0;

        for(int i=0;i<n;i++){
            forwardHash=(forwardHash*base+s[i])%mod;
            backwardHash=(backwardHash+power*s[i])%mod;
            power=(power*base)%mod;

            if(forwardHash==backwardHash){
                maxi=i+1;
            }
        }
        string suff=s.substr(maxi);
        reverse(suff.begin(),suff.end());

        return suff+s;
    }
};