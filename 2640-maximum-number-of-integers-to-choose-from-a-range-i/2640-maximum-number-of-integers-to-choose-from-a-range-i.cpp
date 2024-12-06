class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_set<int>ban(banned.begin(),banned.end());
        int count=0;
        int sum=0;
        for(int i=1;i<=n;i++){
            if(ban.find(i)==ban.end()){
                sum+=i;
               if(sum<=maxSum){
                   // sum+=i;
                    count++;
               }
               else{
                    break;
               }
            }
        }
        return count;
    }
};