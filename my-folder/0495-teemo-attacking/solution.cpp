class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int total=0;
        for(int i=1;i<timeSeries.size();i++){
            int diff=timeSeries[i]-timeSeries[i-1];
            total+=min(diff,duration);
        }      
        return total+duration;
    }
};
