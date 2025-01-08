class Solution {
public:

    bool isPrefix_isSuffix(string &s1, string &s2){
        return s2.substr(0,s1.size())==s1 && s2.substr(s2.size()-s1.size())==s1;
    }
    int countPrefixSuffixPairs(vector<string>& words) {
        int n=words.size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(isPrefix_isSuffix(words[i],words[j])){
                    count++;
                }
            }
        }
        return count;
    }
};