class Solution {
public:

    void solve(unordered_map<char,int>&mp,int &cnt){
        for(auto &it:mp){
            if(it.second>0){
                it.second--;
                cnt++;
                solve(mp,cnt);
                it.second++;
            }
        }
    }
    int numTilePossibilities(string tiles) {
        unordered_map<char,int>mp;
        for(char c:tiles){
            mp[c]++;
        }
        int cnt=0;
        solve(mp,cnt);
        return cnt;
    }
};