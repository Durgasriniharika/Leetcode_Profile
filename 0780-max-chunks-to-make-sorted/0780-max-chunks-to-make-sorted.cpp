class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n=arr.size();
        int chunk_cnt=0;
        int maxi=0;
        for(int i=0;i<n;i++){
            maxi=max(maxi,arr[i]);
            if(maxi==i){
                chunk_cnt++;
            }
        }
        return chunk_cnt;
    }
};