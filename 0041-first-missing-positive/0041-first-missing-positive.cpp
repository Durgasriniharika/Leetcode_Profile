class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
      unordered_set<int>ans;
      for(int it:nums)
      {
        if(it>0)
        {
            ans.insert(it);
        }
      }
      int n=nums.size();
      for(int i=1;i<=n;i++)
      {
        if(ans.find(i)==ans.end(i))
        {
            return i;
        }
      }
      return n+1;
    }
};