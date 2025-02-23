class Solution {
public:
    bool hasSameDigits(string s) {
        int n=s.size();
        while(n>2){
            string res="";
            for(int i=0;i<n-1;i++){
                int mod=(s[i]-'0'+s[i+1]-'0')%10;
                res+=to_string(mod);
            }
             s=res;
             n=s.size();
        }
        return s[0]==s[1];
    }
};