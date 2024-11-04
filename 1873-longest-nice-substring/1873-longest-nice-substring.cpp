class Solution {
public:
    bool isNice(string& str) {
        
    unordered_set<char> charSet(str.begin(), str.end());
        
    for (char c : str) {
       
        if (charSet.find(toupper(c)) == charSet.end() || charSet.find(tolower(c)) == charSet.end()) {
            
            return false;
        }
    }
        
    return true;
}

    string longestNiceSubstring(string s) {
        
         int n = s.size();
        
          string result;
        
        for (int i = 0; i < n; ++i) {
            for (int j = i; j < n; ++j) {

            string substring = s.substr(i, j - i + 1);

            if (isNice(substring)) {

                if (substring.length() > result.length()) {
                    
                    result = substring;
                }
            }
        }
    }

         return result;
    }
};