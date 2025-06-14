class Solution {
public:
    int minMaxDifference(int num) {
        string str=to_string(num);
        int n=str.size();
        string temp=str;

        char ch1;
        int max_idx=0,min_idx=0;
        for(int i=0;i<n;i++){
            if(temp[i]!='9'){
                ch1=temp[i];
                max_idx=i;
                break;
            }
        }
        for(int i=max_idx;i<n;i++){
            if(temp[i]==ch1) temp[i]='9';
        }

        char ch2;
        for(int i=0;i<n;i++){
            if(str[i]!='0'){
                ch2=str[i];
                min_idx=i;
                break;
            }
        }
        for(int i=min_idx;i<n;i++){
            if(str[i]==ch2) str[i]='0';
        }
        int maxi=stoi(temp);
        int mini=stoi(str);
        return maxi-mini;
    }
};