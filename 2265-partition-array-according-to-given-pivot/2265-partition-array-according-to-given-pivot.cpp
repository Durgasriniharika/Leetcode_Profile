class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int left=0;
        vector<int>res(nums.size());
        for(auto num:nums){
           if(num<pivot){
                res[left++]=num;
           }
        }
        for(auto num:nums){
            if(num==pivot){
                res[left++]=num;
            }
        }
        for(auto num:nums){
           if(num>pivot){
                res[left++]=num;
           }
        }
        return res;
    }
};