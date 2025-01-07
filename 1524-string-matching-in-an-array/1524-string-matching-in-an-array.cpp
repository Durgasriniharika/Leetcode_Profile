class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string>res;
        unordered_set<string>st(words.begin(),words.end());
        unordered_set<string>ans;
        for(int i=0;i<words.size();i++){
            string str=words[i];
            for(int j=0;j<str.size();j++){
                for(int k=1;k<=str.size()-j;k++){
                    string sub_str=str.substr(j,k);
                    if(st.find(sub_str)!=st.end() && sub_str!=str 
                    && ans.find(sub_str)==ans.end()){
                        res.push_back(sub_str);
                        ans.insert(sub_str);
                    }
                }
            }
        }
        return res;
    }
};