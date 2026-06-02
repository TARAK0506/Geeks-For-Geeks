#define all(x) (x).begin(), (x).end()
class Solution {
  public:
    int sumDiffPairs(vector<int>& arr, int k) {
        int n = arr.size(), sum = 0;
        sort(all(arr));
        int i = n - 1;
        while(i > 0){
            if((arr[i] - arr[i - 1]) < k){
                sum += arr[i] + arr[i - 1];
                i -= 2;
            }
            else
                i -= 1;
        }
        return sum;
    }
};