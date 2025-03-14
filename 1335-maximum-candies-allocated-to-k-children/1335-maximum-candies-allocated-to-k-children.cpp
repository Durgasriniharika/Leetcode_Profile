class Solution {
public:
    bool solve(vector<int>& candies,long long k,int mid){
        if(mid==0) return false;
        long long cnt=0;
        for(auto num:candies){
            cnt+=(num/mid);
            if(cnt>=k) return true;
        }
        return cnt>=k;
    }
    int maximumCandies(vector<int>& candies, long long k) {
        long long low=1,high=*max_element(candies.begin(),candies.end());
        long long ans=0;
        while(low<=high){
            long long mid=low+(high-low)/2;
            if(solve(candies,k,mid)){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
};