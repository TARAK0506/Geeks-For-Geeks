class Solution {
  public:
    // Function to find all possible unique subsets.
    void dfs( vector<vector<int>>& ans, vector<int>& ds, int idx, vector<int>& arr){
        ans.emplace_back(ds);
        
        for(int i = idx; i < arr.size(); i++){
            if(i > idx && arr[i - 1] == arr[i]) continue;
            
            ds.emplace_back(arr[i]);
            dfs(ans, ds, i + 1, arr);
            ds.pop_back();
        }
        
    }
    vector<vector<int> > AllSubsets(vector<int> arr, int n) {
        sort(arr.begin(), arr.end());
        vector<vector<int>> ans;
        vector<int> ds;
        
        dfs(ans, ds, 0, arr);
        return ans; 
    }
};