class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),[](const vector<int>& a, const vector<int>& b){
            return a[1]>b[1];
        });
        int count=0;
        for(const auto& n:boxTypes){
            int boxes=min(n[0],truckSize);
            count+=(boxes*n[1]);
            truckSize-=boxes;
            if(truckSize==0) break;
        }        
        return count;
    }
};
