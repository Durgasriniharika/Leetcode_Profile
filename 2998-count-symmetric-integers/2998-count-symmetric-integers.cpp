class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int cnt=0;
        for(int i=low;i<=high;i++){
            string num=to_string(i);
            if(num.size()%2!=0) continue;
            int s1=0,s2=0;
            for(int j=0;j<num.size()/2;j++){
                s1+=num[j]-'0';
                s2+=num[j+num.size()/2]-'0';
            }
            if(s1==s2){
                cnt++;
             }
        }
        return cnt;
    }
};