class Solution {
public:
    int mySqrt(int x) {
       int low=0,high=x;
       int res=-1;
       while(low<=high){
            int mid=low+(high-low)/2;
            int square=mid*mid;
            if(square==x){
                return mid;
            }
            else if(square<x){
                low=mid+1;
                res=mid;
            }
            else{
                high=mid-1;
            }
       }
       return res;
    }
};