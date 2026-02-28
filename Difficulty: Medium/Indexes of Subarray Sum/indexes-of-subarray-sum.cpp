class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        vector<int> ans;
        long long i = 0,j = 0,sum = 0;
        int n = arr.size();
        while(j < n){
            sum += arr[j];
            while(sum > target && i<j){
                sum-=arr[i];
                i++;
            }
            if(sum == target){
                return {i+1,j+1};
            }
            j++;
        }
        return {-1};
    }
};