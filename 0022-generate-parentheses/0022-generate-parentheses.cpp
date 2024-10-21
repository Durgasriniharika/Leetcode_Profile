class Solution {
    void solve(int cc,int oc,int n,string s,vector<string>&ans){
        if(oc==n&&cc==n){
            ans.push_back(s);
            return;
        }
        if(oc<n){
            solve(cc,oc+1,n,s+"(",ans);
        }
        if(cc<oc){
            solve(cc+1,oc,n,s+")",ans);
        }
       
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        int cc=0,oc=0;
        solve(cc,oc,n,"",ans);
        return ans;
        
    }
};