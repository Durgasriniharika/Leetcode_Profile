class Solution {
public:
    vector<int> diStringMatch(string s) {
        stack<int>st;
        vector<int>perm;
        for(int i=0;i<=s.size();i++){
            st.push(i);

            if(i==s.size() || s[i]=='I'){
                while(!st.empty()){
                    perm.push_back(st.top());
                    st.pop();
                }
            }
        }
        return perm;
    }
};