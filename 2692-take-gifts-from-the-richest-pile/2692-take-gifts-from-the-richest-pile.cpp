class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int>pq;
        for(auto it:gifts){
            pq.push(it);
        }
        long long ans=0;
        while(k--){
            int val=pq.top();
            pq.pop();
            int res=floor(sqrt(val));
            pq.push(res);
        }
        while(!pq.empty()){
            ans=ans+pq.top();
            pq.pop();
        }
        return ans;

    }
};