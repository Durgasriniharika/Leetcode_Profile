class Solution {
public:
    /*
        1.state--> possibility to breaking the string from previous character to current character
        2.transistion--> searching any substring from previous true indexes+1 to current index from dictionary
        3.base case--> dp[0]=true
        4.final answer--> dp[n]
    */
    bool wordBreak(string s, vector<string>& wordDict) {

        unordered_set<string>s1;
        for(string &word:wordDict){
            s1.insert(word);
        }

        int n=s.size();

        vector<bool>dp(n+1,false);

        dp[0]=true;

        int maxLen = 0;
        for (string &word : wordDict) {
            maxLen = max(maxLen, (int)word.size());
        }

        for(int i=1;i<=n;i++){
            for(int j=0;j<i;j++){
                if(dp[j]==true){
                    string str=s.substr(j,i-j);
                    if(s1.count(str)){
                        dp[i]=true;
                    }
                }
            }
        }
        return dp[n];
    }
};