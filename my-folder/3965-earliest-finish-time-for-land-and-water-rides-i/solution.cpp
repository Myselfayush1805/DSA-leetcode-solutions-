class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int minTime=INT_MAX;
        for(int i=0;i<landStartTime.size();i++){
            for(int j=0;j<waterStartTime.size();j++){
                int landFirst=landStartTime[i]+landDuration[i];
                int total1=max(landFirst,waterStartTime[j])+waterDuration[j];
                int waterFirst=waterStartTime[j]+waterDuration[j];
                int total2=max(waterFirst,landStartTime[i])+landDuration[i];
                minTime=min({minTime,total1,total2});
            }
        }
        return minTime;
    }
};
