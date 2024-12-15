class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        priority_queue<pair<double,pair<int,int>>>pq;
        for(const auto& it:classes){
             int pass=it[0];
             int total=it[1];
             double gain=((double)(pass+1)/(total+1))-((double)pass/total);
             pq.push({gain,{pass,total}});
        }
        while(extraStudents--){
            auto val=pq.top();
            pq.pop();

            int pass=val.second.first;
            int total=val.second.second;
            pass++;
            total++;
            double new_gain=((double)(pass+1)/(total+1))-((double)pass/total);
            pq.push({new_gain,{pass,total}});
        }
        double avg_ratio=0.0;
        while(!pq.empty()){
            auto val=pq.top();
            pq.pop();
            int pass=val.second.first;
            int total=val.second.second;
            avg_ratio+=(double)pass/total;
        }
        return avg_ratio/classes.size();
    }
};