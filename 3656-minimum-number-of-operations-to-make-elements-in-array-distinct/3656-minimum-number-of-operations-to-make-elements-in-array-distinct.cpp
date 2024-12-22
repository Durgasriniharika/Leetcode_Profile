class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int op=0;
        while(true){
            unordered_set<int>s;
            bool dup=false;
            for(int i=0;i<nums.size();i++){
                if(s.find(nums[i])!=s.end()){
                    dup=true;
                    break;
                }
                s.insert(nums[i]);
            }
            if(!dup){
                return op;
            }
            nums.erase(nums.begin(),nums.begin()+min(3,(int)nums.size()));
            op++;
        }
    }
};