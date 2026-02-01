class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        vector<vector<int>>res;
        int p1=0;
        int p2=0;
        while(p1<firstList.size() && p2<secondList.size()){
            if(max(firstList[p1][0],secondList[p2][0])<=min(firstList[p1][1],secondList[p2][1])){
                res.push_back({max(firstList[p1][0],secondList[p2][0]),min(firstList[p1][1],secondList[p2][1])});
            }        
            if(firstList[p1][1]<secondList[p2][1]){
                p1++;
            }   
            else{
                p2++;
            }
        }           
        return res;   
    }
};
