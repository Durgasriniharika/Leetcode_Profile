class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        unordered_set<int>s(nums.begin(),nums.end());
        vector<int>org(s.begin(),s.end());
       
        int op=0;
       
        for(int i=0;i<org.size();i++){
            if(org[i]>k){
                op++;
            }
            else if(org[i]<k){
                return -1;
            }
        }
        return op;
    }
};