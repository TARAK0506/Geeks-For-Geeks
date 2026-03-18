class Solution {
  public:
    vector<string> words;
    
    void dfs(vector<int>& arr, int idx, string& curr, unordered_map<int, string>& letters){
        
        if(idx == arr.size()){
            if(!curr.empty())
                words.emplace_back(curr);
            return ;
        }
        
        if(letters.find(arr[idx]) == letters.end()){
            dfs(arr, idx + 1, curr, letters);
            return;
        }
        string s = letters[arr[idx]];
        for(int i = 0; i < s.length(); i++){
            curr.push_back(s[i]);
            dfs(arr, idx + 1, curr, letters);
            curr.pop_back();
        }
    }
    vector<string> possibleWords(vector<int> &arr) {
        unordered_map<int, string> letters = {
            {2, "abc"},
            {3, "def"},
            {4, "ghi"},
            {5, "jkl"},
            {6, "mno"},
            {7, "pqrs"},
            {8, "tuv"},
            {9, "wxyz"}
        };
        string curr = "";
        dfs(arr, 0, curr, letters);
        return words;
    }
};