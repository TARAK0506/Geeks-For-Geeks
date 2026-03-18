class Solution {
  public:
    vector<vector<int>> ans;
    vector<int> ds;
    void dfs(vector<int>&arr, int idx, unordered_map<int, int>& mp){
        
        if(idx >= arr.size()){
            ans.emplace_back(ds);
            return ;
        }
        
        for(int i = 0; i < arr.size(); i++){
            if(!mp[arr[i]]){
                ds.emplace_back(arr[i]);
                mp[arr[i]] = 1;
                dfs(arr, idx + 1, mp);
                ds.pop_back();
                mp[arr[i]] = 0;
            }
        }
    }
    vector<vector<int>> permuteDist(vector<int>& arr) {
        unordered_map<int, int>mp;
        for(auto& num : arr){
            mp[num] = 0;
        }
        dfs(arr, 0, mp);
        return ans;
    }
};