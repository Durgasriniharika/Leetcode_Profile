class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int n=nums.size();
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>>pq;
        for(int i=0;i<n;i++){
            pq.push({nums[i],i});
        }
        while(k--){
            int val=pq.top().first;
            int idx=pq.top().second;
            pq.pop();
            val=val*multiplier;
            pq.push({val,idx});
        }
        
        while(!pq.empty()){
            int val=pq.top().first;
            int idx=pq.top().second;
            nums[idx]=val;
            pq.pop();
        }
        return nums;
    }
};