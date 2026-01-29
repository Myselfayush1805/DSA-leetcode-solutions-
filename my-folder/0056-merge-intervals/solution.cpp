class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>result;   
        if(intervals.empty()){
            return result;
        }   
        sort(intervals.begin(),intervals.end());
        for(auto n:intervals){
            if(result.empty()||result.back()[1]<n[0]){
                result.push_back(n);
            }           
            else{
                result.back()[1]=max(result.back()[1],n[1]);
            }
        }
        return result;        
    }
};
