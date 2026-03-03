class Solution {
  public:
    int equalSumSpan(vector<int> &a1, vector<int> &a2) {
        int n = a1.size(), maxLen = 0, sum = 0;
        unordered_map<int, int> mp;
        for(int i = 0; i < n; i++){
            sum += (a1[i] - a2[i]);
            if(sum == 0) maxLen = i + 1;
            if(mp.find(sum) != mp.end()) maxLen = max(maxLen, i - mp[sum]);
            else mp[sum] = i;
        }
        
        return maxLen;
    }
};