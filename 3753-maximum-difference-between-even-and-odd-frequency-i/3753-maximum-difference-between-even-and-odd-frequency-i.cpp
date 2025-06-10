class Solution {
public:
    int maxDifference(string s) {
        map<char,int>mp;
        for(auto c:s){
            mp[c]++;
        }
        vector<int>even;
        vector<int>odd;
        
        for(auto& [ch,cnt]:mp){
            if(cnt%2==0){
                even.push_back(cnt);
                
            }
            else{
                odd.push_back(cnt);
        
            }
        }
        
        if(odd.empty() || even.empty()) return -1;
        int maxi=INT_MIN;
        bool flag=false;
        for(auto it1:odd){
            for(auto it2:even){
                if(it1-it2>maxi){
                    maxi=it1-it2;
                    flag=true;
                }
            }
        }
        return flag?maxi:-1;
    }
};