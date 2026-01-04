class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int total_sum=0;
        for(auto it:nums){
            vector<int>divs;
            for(int i=1;i*i<=it;i++){
                if(it%i==0){
                    divs.push_back(i);
                    if(i!=it/i){
                        divs.push_back(it/i);
                    }
                }
                if(divs.size()>4) break;
            }
            if(divs.size()==4){
                for(auto num:divs){
                    total_sum+=num;
                }
            }
        }
        return total_sum;
    }
};