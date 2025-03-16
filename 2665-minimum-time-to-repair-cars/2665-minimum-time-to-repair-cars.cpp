class Solution {
public:

    bool solve(vector<int>& ranks,int cars,long long time){
        long long cnt=0;
        for(auto it:ranks){
            cnt+=sqrt(time/it);
            if(cnt>=cars) return true;
        }
        return false;
    }
    long long repairCars(vector<int>& ranks, int cars) {
        long long low=1,high=(long long) *min_element(ranks.begin(),ranks.end())*cars*cars;
        long long res=high;

        while(low<=high){
            long long mid=low+(high-low)/2;
            if(solve(ranks,cars,mid)){
                res=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return res;
    }
};