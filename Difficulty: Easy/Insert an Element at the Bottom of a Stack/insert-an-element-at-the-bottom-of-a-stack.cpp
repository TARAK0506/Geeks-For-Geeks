// User function Template for C++

class Solution {
  public:
    void fun(stack<int>& st, int n, int x){
        if(st.empty() && n == 0){
            st.push(x);
            return ;
        }
        int a = st.top();
        st.pop();
        fun(st, n - 1, x);
        st.push(a);
    }
    stack<int> insertAtBottom(stack<int> st, int x) {
        int n = st.size();
        fun(st, n, x);
        return st;
    }
};