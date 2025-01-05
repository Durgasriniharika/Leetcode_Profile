class Solution {
public:
    char isMirror(char c){
        return 'a'+('z'-c);
    }
    long long calculateScore(string s) {
        long long score=0;
        
        unordered_map<char,vector<int>>mp;
        for(int i=0;i<s.size();i++){
            char reflect=isMirror(s[i]);
            if(!mp[reflect].empty()){
                int j=mp[reflect].back();
                mp[reflect].pop_back();
                score+=i-j;
            }
            else{
                mp[s[i]].push_back(i);
            }
        }
        return score;
    }
};