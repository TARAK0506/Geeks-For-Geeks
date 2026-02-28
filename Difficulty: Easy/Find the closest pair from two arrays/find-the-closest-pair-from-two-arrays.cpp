class Solution {
  public:
    vector<int> findClosestPair(vector<int> &arr1, vector<int> &arr2, int x) {
        int n = arr1.size(), m = arr2.size();
        vector<int> arr(2, 0);
        int i = 0, j = m - 1;
        int diff = INT_MAX;
        while(i < n && j >= 0){
            int sum = arr1[i] + arr2[j];
            int absDiff = abs(sum - x);
            if(absDiff == 0){
                return {arr1[i], arr2[j]};
            }
            if(diff > absDiff){
                diff = absDiff;
                arr[0] = arr1[i], arr[1] = arr2[j];
            }
            else if(sum < x) i++;
            else j--;
        }
        return arr;
    }
};