class Solution {
public:
    int buttonWithLongestTime(vector<vector<int>>& events) {
         int index = events[0][0]; 
        int maxi = events[0][1]; 
        for (int i = 1; i < events.size(); i++) {
            int total = events[i][1] - events[i - 1][1];
            if (total > maxi || (total == maxi && events[i][0] < index)) {
                maxi = total;
                index = events[i][0];
            }
        }
        return index;
    }
};