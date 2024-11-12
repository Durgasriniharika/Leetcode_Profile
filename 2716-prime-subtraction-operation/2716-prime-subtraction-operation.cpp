class Solution {
public:

   bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
        return true;
    }

    bool primeSubOperation(vector<int>& nums) {
        if(nums.size()==1) return true;
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]) continue;
            int prime=nums[i]-nums[i+1]+1;

            while(prime<nums[i] && !isPrime(prime)) prime++;
            if(prime==nums[i]) return false;
            else nums[i]-=prime;
        }
        return true;
    }
};