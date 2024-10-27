class Solution {
public:
    int numberOfSubstrings(string s, int k) {
       int res=0;
        unordered_map<char,int>mp;
         int j=0;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            while(mp[s[i]]>=k){
               res+=(s.size()-i);
                mp[s[j]]--;
                j++;
            }
        }
        return res;
    }
};