class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {

        int maxi=0;
        
        int left=values[0];

        for(int right=1;right<values.size();right++){

            maxi=max(maxi,left+values[right]-right);

            left=max(left,values[right]+right);
        }
        return maxi;
    }
};