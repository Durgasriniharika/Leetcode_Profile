class Solution {
public:
    bool isPrime(int x){
        if(x<2) return false;
        for(int i=2;i*i<=x;i++){
            if(x%i==0) return false;
        }
        return true;
    }
    int sumFourDivisors(vector<int>& nums) {
        int sum=0;
        for(auto it:nums){
            //case1: cube of a prime number(1,p,p^2,p^3)
            int p=round(cbrt(it));
            if(p*p*p==it && isPrime(p)){
                sum+=(1+p+p*p+it);
                continue;
            }

            //case2: product of two distinct primes(1,p,q,p*q)
            for(int i=2;i*i<=it;i++){
                if(it%i==0){
                    int j=it/i;
                    if(i!=j && isPrime(i) && isPrime(j)){
                        sum+=(1+i+j+it);
                    }
                    break;
                }
            }
        }
        return sum;
    }
};