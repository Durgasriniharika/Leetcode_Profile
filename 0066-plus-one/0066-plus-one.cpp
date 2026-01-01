class Solution {
public:
    vector<int> plusOne(vector<int>& d) {
        // vector<int>res;
        // long long rem=0;
        // long long int ans=0;
        // string z="";
        // for(int i=0;i<d.size();i++)
        // {
        //     z+=d[i]+'0';
        // }
        // long long num=stoll(z)+1;
        // string y=to_string(num);
        // long long x=0;
        // for(long long i=0;i<y.size();i++){
        //     x=(y[i]-'0')%10;
        //     res.push_back(x);
        // }
        // return res;

        for(int i=d.size()-1;i>=0;i--){
            if(d[i]<9){
                d[i]++;
                return d;
            }
            d[i]=0;
        }
        d.insert(d.begin(),1);
        return d;
    }
};