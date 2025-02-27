class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        unordered_set<int>s(arr.begin(),arr.end());
        int maxi=0;
        for(int i=0;i<arr.size()-1;i++){
            for(int j=i+1;j<arr.size();j++){
                int a=arr[i],b=arr[j];
                 int cnt=2;
                while(s.count(a+b)){
                    int next=a+b;
                    a=b;
                    b=next;
                    cnt++;
                }
                maxi=max(maxi,cnt);
            }
        }
        return (maxi>2)?maxi:0;
    }
};