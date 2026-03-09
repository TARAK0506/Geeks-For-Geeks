class Solution {
  public:
    int countSubarrays(vector<int> &arr) {
        int n = arr.size(), cnt = 0;
        stack<int> st;
        for(int i = 0; i< n; i++){
            while(!st.empty() && st.top() > arr[i]){
                st.pop();
            }
            st.push(arr[i]);
            cnt += st.size();
        }
        return cnt;
    }
};