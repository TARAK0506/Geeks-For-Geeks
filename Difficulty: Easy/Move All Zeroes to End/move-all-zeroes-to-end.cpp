class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        int n = arr.size(), i = 0, j = 0;
        for(i = 0; i < n; i++){
            if(arr[i] != 0) arr[j++] = arr[i];
        }
        while(j < n){
            arr[j++] = 0;
        }
    }
};