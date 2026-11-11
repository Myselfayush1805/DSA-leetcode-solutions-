class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int countEven=0;
        int countOdd=0;
        for(int n:position){
            (n%2==0) ? countEven++:countOdd++;
        }        
        return min(countEven,countOdd);
    }
};
