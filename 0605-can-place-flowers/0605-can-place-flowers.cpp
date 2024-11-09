class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int flowered=0;
        int N=flowerbed.size();
        for(int i=0;i<N;i++){
            if((flowerbed[i]==0) && (i==0 || flowerbed[i-1]==0) && (i==N-1 || flowerbed[i+1]==0)){
                flowerbed[i]=1;
                flowered++;
            }
            if(flowered==n){
                return true;
            }
        }
        return flowered>=n;
    }
};