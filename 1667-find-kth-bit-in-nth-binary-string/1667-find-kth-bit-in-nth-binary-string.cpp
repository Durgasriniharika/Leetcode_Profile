class Solution {
public:
    string invert(string &str){
        string temp=str;
        for(int i=0;i<str.size();i++){
            temp[i]=(str[i]=='0')?'1':'0';
        }
        return temp;
    }

    string reverseString(string str){
        reverse(str.begin(),str.end());
        return str;
    }
    
    char findKthBit(int n, int k) {
        string str="0";
        while(n--){
            str=str+'1'+reverseString(invert(str));
        }
        return str[k-1];
    }
};