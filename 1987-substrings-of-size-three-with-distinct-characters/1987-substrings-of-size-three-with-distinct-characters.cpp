class Solution {
public:
    int countGoodSubstrings(string s) {
        if(s.size()<3){
            return 0;
        }
        int cnt=0;
        for(int i=0;i<=s.size()-3;i++){
            string str=s.substr(i,3);
            set<char>st(str.begin(),str.end());
            if(st.size()==3){
                cnt++;
            }
        }
        return cnt;
    }
};