class Solution {
public:
    int strStr(string haystack, string needle) {
        // return haystack.find(needle);
        int n=haystack.size();
        int m=needle.size();
        int i=0;
        for(;i<n;i++){
            if(haystack[i]==needle[0]){
                int flag=1;
                for(int k=0;k<m;k++)
                {
                    if(needle[k]!=haystack[i+k])
                    {
                        flag=0;
                        break;
                    }
                }
          if(flag)
          {
              return i;
          }
            }
           
        }
    return -1;
    }
};