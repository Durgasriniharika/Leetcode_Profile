class Solution {
public:
    string compressedString(string word) {
        string res="";
        int count=0;
        char c;
        for(int i=0;i<word.size();i++){
            c=word[i];
            while(count<9 && word[i]==c){
                count++;
                i++;
            }
            res+=to_string(count)+c;
            count=0;
            i--;
        }
        return res;
    }
};