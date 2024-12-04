class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {

        int n=str1.size(),m=str2.size();

        int left=0,right=0;

        while(left<n && right<m){

            if(str1[left]==str2[right] || ((str1[left]-'a'+1)%26+'a')==str2[right]){
                right++;
            }
            left++;
        }
        return right==m;
    }
};