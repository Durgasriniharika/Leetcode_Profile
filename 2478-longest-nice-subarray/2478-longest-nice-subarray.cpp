class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int i=0,j=0;
        
        vector<int>res;
        int maxi=0;
        while(j<nums.size()){
            bool flag=true;
            for(int k=0;k<res.size();k++){
                if((res[k] & nums[j])!=0){
                    flag=false;
                    break;
                }
            }

            if(flag){
                res.push_back(nums[j]);
                maxi=max(maxi,j-i+1);
                j++;
            }
            else{
                res.erase(res.begin());
                i++;
            }
        }
        return maxi;
    }
};