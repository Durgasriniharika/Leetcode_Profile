class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>mid;
        vector<int>less;
        vector<int>great;
        for(auto num:nums){
            if(num==pivot){
                mid.push_back(num);
            }
        }
        for(auto num:nums){
            if(num<pivot){
                less.push_back(num);
            }
        }
        for(auto num:nums){
            if(num>pivot){
                great.push_back(num);
            }
        }
        vector<int>res;
        res.insert(res.end(),less.begin(),less.end());
        res.insert(res.end(),mid.begin(),mid.end());
        res.insert(res.end(),great.begin(),great.end());
        return res;
    }
};