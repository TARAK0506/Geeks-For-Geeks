// User function Template for C++

class Solution {
  public:
    const long long MOD = 1e9 + 7;
    long long fun(int n){
        long long end = n * (n + 1) / 2;
        long long start = end - n;
        if(n == 1){
            return 1;
        }
        long long sum = 1;
        for(int i = start + 1; i <= end; i++){
            sum = (sum * i) % MOD;
        }
        
        return (fun(n - 1) + sum) % MOD;
    }
    long long sequence(int n) {
        return fun(n);
    }
};