class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int prefix = 0;
        int total = 0;
        for (auto it : nums) {
            total += it;
        }
        int cnt = 0;
        for (int i = 0; i < nums.size() - 1; i++) {
            prefix += nums[i];
            int suffix = total - prefix;
            int diff = abs(prefix - suffix);
        
            if (diff % 2 == 0) {
                cnt++;
            }
        }
        return cnt;
    }
};