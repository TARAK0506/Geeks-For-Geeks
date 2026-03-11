class Solution {
  public:
    void fun(vector<string>& ans, string& curr, string& s, int idx, int n){
        
        if(idx == n){
            ans.emplace_back(curr);
            return ;
        }
        
        curr.push_back(s[idx]);
        fun(ans, curr, s, idx + 1, n);
        curr.pop_back();
        fun(ans, curr, s, idx + 1, n);
        
    }
    vector<string> powerSet(string s) {
        int n = s.length();
        vector<string> ans;
        string curr = "";
        fun(ans, curr, s, 0, n);
        return ans;
    }
};
