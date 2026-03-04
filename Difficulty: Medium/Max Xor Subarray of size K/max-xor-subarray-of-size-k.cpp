class Solution {
  public:
    int maxSubarrayXOR(vector<int>& arr, int k) {
        int n = arr.size(), maxXor = 0;
        int i = 0, j = 0, currXor = 0;
        while(j < n){
            currXor ^= arr[j];
            if(j - i + 1 == k){
                maxXor = max(maxXor, currXor);
                currXor ^= arr[i];
                i++;
            }
            j++;
        }
        return maxXor;
    }
};