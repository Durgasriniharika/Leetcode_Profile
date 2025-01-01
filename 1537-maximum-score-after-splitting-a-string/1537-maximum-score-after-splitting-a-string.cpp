class Solution {
public:
    int maxScore(string s) {
        int n=s.size();
        int left_score=0;
        int right_score=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                right_score++;
            }
        }
        int maxi=0;
        for(int i=0;i<n-1;i++){
            if(s[i]=='0'){
                left_score++;
            }
            else{
                right_score--;
            }

            maxi=max(maxi,left_score+right_score);
        }
        return maxi;
    }
};