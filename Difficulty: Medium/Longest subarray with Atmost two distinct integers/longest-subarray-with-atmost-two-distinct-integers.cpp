class Solution {
  public:
    int totalElements(vector<int> &arr) {
        int n = arr.size() - 1, maxLen = 0;
        int i = 0, j = 0;
        unordered_map<int, int> mp;
        while(j <= n){
            mp[arr[j]]++;
            
            while(mp.size() > 2){
                mp[arr[i]]--;
                if(mp[arr[i]] == 0) mp.erase(arr[i]);
                i++;
            }
            
            maxLen = max(j - i + 1, maxLen);
            j++;
        }
        return maxLen;
    }
};