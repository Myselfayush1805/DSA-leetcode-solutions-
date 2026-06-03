class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int landFirst=INT_MAX;
        for(int i=0;i<landStartTime.size();i++){
            landFirst=min(landFirst,landStartTime[i]+landDuration[i]);
        }
        int waterFirst=INT_MAX;
        for(int j=0;j<waterStartTime.size();j++){
            waterFirst=min(waterFirst,waterStartTime[j]+waterDuration[j]);
        }
        int ans=INT_MAX;
        for(int i=0;i<landStartTime.size();i++){
            ans=min(ans,max(waterFirst,landStartTime[i])+landDuration[i]);
        }
        for(int j=0;j<waterStartTime.size();j++){
            ans=min(ans,max(landFirst,waterStartTime[j])+waterDuration[j]);
            }    
        return ans;
    }
};
