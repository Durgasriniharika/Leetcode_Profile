class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size();
        unordered_map<char,int>mp;
        int i=0,cnt=0;
        for(int j=0;j<n;j++){
            mp[s[j]]++;

            while(mp['a']>0 && mp['b']>0 && mp['c']>0){
                cnt+=(n-j);
                mp[s[i]]--;
                i++;
            }
        }
        return cnt;
    }
};