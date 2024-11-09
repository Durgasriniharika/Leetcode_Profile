class Solution {
public:
    int countSetBits(int num) {
    int count = 0;
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

    bool canSortArray(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                if(countSetBits(nums[j])==countSetBits(nums[j+1])){
                    if(nums[j]>nums[j+1]){
                        swap(nums[j],nums[j+1]);
                    }
                }
            }
        }
        for(int i=1;i<n;i++){
            if(nums[i]<nums[i-1]){
                return false;
            }
        }
        return true;
    }
};