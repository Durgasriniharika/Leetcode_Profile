class Solution {
public:
    bool ispalindrome(string n){
        string temp=n;
        reverse(n.begin(),n.end());
        if(temp==n) return true;
        return false;
    }
    string solve(int n,int base){
        if(n==0) return "0";
        vector<int>all_bases;
        
        while(n>0){
            all_bases.push_back(n%base);
            n/=base;
        }

        string res="";
        for(int i=all_bases.size()-1;i>=0;i--){
            res+=to_string(all_bases[i]);
        }
        return res;
    }
    bool isStrictlyPalindromic(int n) {
        for(int base=2;base<=n-2;base++){
            string num=solve(n,base);
            if(!ispalindrome(num)){
                return false;
            }
        }
        return true;
    }
};