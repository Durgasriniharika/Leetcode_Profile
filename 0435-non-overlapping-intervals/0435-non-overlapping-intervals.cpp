class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {

        sort(intervals.begin(),intervals.end());

         vector<vector<int>>ans;

        int start=intervals[0][0];
        int last=intervals[0][1];
       

        int remove=0;

        for(int i=1;i<intervals.size();i++){
            if(last<=intervals[i][0]){  
                ans.push_back({start,last});
                start=intervals[i][0];
                last=intervals[i][1];
            }
            else{
                remove++;
                int mini=min(last,intervals[i][1]);
                last=mini;
            }
        }
        ans.push_back({start,last});
        return remove;
    }
};