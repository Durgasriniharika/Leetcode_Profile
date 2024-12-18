class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> ans;
        for (int i = 0; i < prices.size(); i++) {
            int f = 0;
            for (int j = i + 1; j < prices.size(); j++) {
                if (j > i && prices[j] <= prices[i]) {
                    ans.push_back(prices[i] - prices[j]);
                    f = 1;
                    break;
                }
            }
            if (f != 1) {
                ans.push_back(prices[i]);
            }
        }
        return ans;
    }
};