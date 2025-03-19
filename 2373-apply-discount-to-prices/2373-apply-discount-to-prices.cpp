class Solution {
public:
    string discountPrices(string sentence, int discount) {
        stringstream ss(sentence);
        string word, res = "";
        double discnt_org = discount / 100.0;
        while (ss >> word) {
            if (word[0] == '$' && word.size() > 1 && isdigit(word[1])) {
                int i = 1;
                while (i < word.size() && isdigit(word[i])) {
                    i++;
                }
                if (i == word.size()) {
                    string str = word.substr(1);
                    long long pr = stoll(str);

                    double discnt = pr * discnt_org;
                    double price_org = pr - discnt;

                    stringstream formatted;
                    formatted << fixed << setprecision(2) << price_org;
                    word = "$" + formatted.str();
                }
            }
            if (!res.empty()) {
                res += " ";
            }
            res += word;
        }
        return res;
    }
};