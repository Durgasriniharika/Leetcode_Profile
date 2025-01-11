class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.size()<k) return false;
        unordered_map<char,int>mp;
        for(char ch:s){
            mp[ch]++;
        }
        int count=0;
        for(auto it:mp){
            if(it.second%2!=0){
                count++;
            }
        }
        return count<=k;
    }
};