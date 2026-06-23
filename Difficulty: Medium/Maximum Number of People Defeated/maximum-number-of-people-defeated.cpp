class Solution {
  public:
    int maxPeopleDefeated(int p) {
        int maxNoOfPeople = 0;
        int low = 1, high = 1000;
        while(low <= high){
            int mid = low + (high - low) / 2;
            int sumOfSquaresN = (mid*(mid + 1)*(2*mid + 1)) / 6;
            if(sumOfSquaresN > p){
                high = mid - 1;
            }
            else{
                low = mid + 1;
                maxNoOfPeople = mid;
            }
        }
        return maxNoOfPeople;
    }
};
