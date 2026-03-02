class Solution {
  public:
    int maxWater(vector<int> &arr) {
        int n = arr.size(), total = 0;
        int leftMax = arr[0], rightMax = arr[n - 1];
        int i = 1, j = n - 2;
        
        while(i <= j){
           
           if(rightMax <= leftMax){
               total += max(0, rightMax - arr[j]);
               rightMax = max(rightMax, arr[j]);
               j--;
           }
           else{
                total += max(0, leftMax - arr[i]);
                leftMax = max(leftMax, arr[i]);
                i++;
           }
           
           
        }
        return total;
    }
};