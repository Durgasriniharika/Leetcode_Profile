class Solution {
public:
    int countVowelSubstrings(string word) {
        int cnt=0;
        unordered_set<char>s={'a','e','i','o','u'};
        for(int i=0;i<word.size();i++){
            unordered_map<char,int>mp;
            for(int j=i;j<word.size();j++){
                if(s.count(word[j])){
                    mp[word[j]]++;
                    if(mp.size()==5){
                        cnt++;
                    }
                }
                else{
                    break;
                }
            }
        }
        return cnt;
    }
};