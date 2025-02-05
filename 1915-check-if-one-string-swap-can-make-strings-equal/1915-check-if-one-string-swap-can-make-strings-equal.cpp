class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
       int count=0;
       vector<int>res;
       for(int i=0;i<s1.length();i++){
            if(s1[i]!=s2[i]){
                count++;
                res.push_back(i);
            }
       }
       if(count==2){
         int i=res[0];
         int j=res[1];
         return s1[i]==s2[j] && s1[j]==s2[i];
       }
       return count==0;
    }
};