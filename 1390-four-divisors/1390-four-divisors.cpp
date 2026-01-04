class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int total_sum=0;
        for(auto it:nums){
            int cnt=0;
            int sum=0;
            for(int i=1;i*i<=it;i++){
                if(it%i==0){
                    int n1=i;
                    int n2=it/i;

                    cnt++;
                    sum+=i;

                    if(n1!=n2){
                        cnt++;
                        sum+=n2;
                    }
                    if(cnt>4) break;
                }
            }
            if(cnt==4){
                total_sum+=sum;
            }
        }
        return total_sum;
    }
};