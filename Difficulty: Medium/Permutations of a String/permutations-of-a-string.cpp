class Solution {
  public:
    vector<string> ans;
    void dfs(string&s, int idx, string& curr, unordered_map<char, int>&mp){
        
        if(idx == s.length()){
            ans.emplace_back(curr);
            return ;
        }
        
        for(int i = 0; i < s.length(); i++){
            if(mp[i]) continue;
            
            if(i > 0 && s[i] == s[i - 1] && !mp[i - 1]) continue;
            
            if(!mp[i]){
                curr.push_back(s[i]);
                mp[i] = 1;
                dfs(s, idx + 1, curr, mp);
                curr.pop_back();
                mp[i] = 0;
            }
        }
    }
    vector<string> findPermutation(string &s) {
        sort(s.begin(), s.end());
        string curr = "";
        unordered_map<char, int> mp;
        for(int i = 0; i < s.length(); i++){
            mp[i] = 0;
        }
        dfs(s, 0, curr, mp);
        return ans;
    }
};
