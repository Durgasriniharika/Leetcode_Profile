class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        unordered_set<char>s={'a','e','i','o','u'};
        vector<int>prefix_sum(words.size(),0);
        int prefix=0;
        for(int i=0;i<words.size();i++){
            string str=words[i];
            if(s.find(str[0])!=s.end() && s.find(str[str.size()-1])!=s.end()){
                prefix+=1;
            }
             prefix_sum[i]=prefix;
        }
        vector<int>ans(queries.size());
        for(int i=0;i<queries.size();i++){
            int first=queries[i][0];
            int second=queries[i][1];
            if(first==0){
                ans[i]=prefix_sum[second];
            }
            else{
                ans[i]=prefix_sum[second]-prefix_sum[first-1];
            }
        }
        return ans;
    }
};