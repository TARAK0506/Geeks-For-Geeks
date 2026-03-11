class Solution {
  public:
  
    void backtrack(vector<vector<int>>& ans, vector<int>ds, vector<int>& arr, int idx, int n){
        if(idx == n){
            ans.emplace_back(ds);
            return ;
        }
        ds.push_back(arr[idx]);
        backtrack(ans, ds, arr, idx + 1, n);
        ds.pop_back();
        backtrack(ans, ds, arr, idx + 1, n);
    }
    vector<vector<int>> subsets(vector<int>& arr) {
        int n = arr.size();
        vector<vector<int>> ans;
        vector<int>ds;
        backtrack(ans, ds, arr, 0, n);
        return ans;
    }
};