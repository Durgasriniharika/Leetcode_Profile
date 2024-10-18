class Solution {
public:

    void solve(vector<int>&nums, int curridx, int currOR, int maxOR, int& count){
       
       if(curridx==nums.size()){

            if(currOR==maxOR){
                count++;
            }

            return;
       }

       solve(nums, curridx+1, currOR|nums[curridx], maxOR, count); //for picking

        solve(nums, curridx+1, currOR, maxOR, count); //for non pick

    }

    int countMaxOrSubsets(vector<int>& nums) {

        int maxOR=0;

        for(auto num:nums){
            
            maxOR|=num;
        }

        int count=0;

        solve(nums, 0, 0, maxOR, count);

        return count;
    }
};