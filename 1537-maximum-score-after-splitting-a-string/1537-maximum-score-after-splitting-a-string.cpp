class Solution {
public:
    int maxScore(string s) {
        int n = s.size();
        vector<string> left, right;
        
        for (int i = 1; i <= n; i++) {
            left.push_back(s.substr(0, i));
        }
        
        for (int i = 0; i < n; i++) {
            right.push_back(s.substr(i, n - i));
        }
        
        int left_score = 0;
        int right_score = 0;
        
        vector<int> left_scores;
        vector<int> right_scores;
        
        for (const string& sub : left) {
            int count_zeros = 0;
            for (char c : sub) {
                if (c == '0') {
                    count_zeros++;
                }
            }
            left_scores.push_back(count_zeros);
        }
        
        for (const string& sub : right) {
            int count_ones = 0;
            for (char c : sub) {
                if (c == '1') {
                    count_ones++;
                }
            }
            right_scores.push_back(count_ones);
        }
        
        int maxi = 0;
        for (int i = 0; i < left_scores.size(); i++) {
            if (i + 1 < right_scores.size()) {
                int score = left_scores[i] + right_scores[i + 1];
                maxi = max(maxi, score);
            }
        }
        
        return maxi;
    }
};