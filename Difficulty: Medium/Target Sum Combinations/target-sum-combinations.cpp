class Solution {
  public:
    void backtrack(vector<vector<int>>&ans, int idx, vector<int>& ds, vector<int> &arr, int n, int target){
        if(target == 0){
            ans.emplace_back(ds);
            return ;
        }
        
        if(idx == n || target < 0) return ;
        
        ds.emplace_back(arr[idx]);
        backtrack(ans, idx, ds, arr, n, target - arr[idx]);
        ds.pop_back();
        backtrack(ans, idx + 1, ds, arr, n, target);
    }
    vector<vector<int>> targetSumComb(vector<int> &arr, int target) {
        int n = arr.size();
        vector<vector<int>> ans;
        vector<int>ds;
        backtrack(ans, 0, ds, arr, n, target);
        return ans;
    }
};