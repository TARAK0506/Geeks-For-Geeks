class Solution {
public:
    vector<vector<int>> ans;
    vector<int> path;
    function<void(vector<int>&, vector<int>&, unordered_map<int, bool>&)> dfs =
    [&](vector<int>& path, vector<int>& arr, unordered_map<int, bool>& mp){
        if(path.size() == arr.size()){
            ans.emplace_back(path);
            return;
        }
        for(int i = 0; i < arr.size(); i++){
            if(!mp[i]){
                path.emplace_back(arr[i]);
                mp[i] = true;
                dfs(path, arr, mp);
                path.pop_back();
                mp[i] = false;
            }
        }
    };
    vector<vector<int>> permuteDist(vector<int>& arr) {
        unordered_map<int, bool> mp;
        for(int i = 0; i < arr.size(); i++){
            mp[i] = false;
        }
        dfs(path, arr, mp);
        return ans;
    }
};