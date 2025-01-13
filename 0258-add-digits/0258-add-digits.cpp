class Solution {
public:
    int addDigits(int num) {
        long long n=num;
       while(n>9)
       {
          long long sum=0;
          while(n>0)
          {
              int rem=n%10;
              sum=sum+rem;
              n=n/10;
          }
          n=sum;
       }
       return n;
    }
};