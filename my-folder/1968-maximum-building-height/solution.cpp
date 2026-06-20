class Solution {
public:
    int maxBuilding(int n, vector<vector<int>>& restrictions) {
        restrictions.push_back({1,0});
        sort(restrictions.begin(),restrictions.end());
        int m=restrictions.size();
        for(int i=1;i<m;i++){
            int dist=restrictions[i][0]-restrictions[i-1][0];
            restrictions[i][1]=min(restrictions[i][1],restrictions[i-1][1]+dist);
        }
        for(int i=m-2;i>=0;i--){
            int dist=restrictions[i+1][0]-restrictions[i][0];
            restrictions[i][1]=min(restrictions[i][1],restrictions[i+1][1]+dist);
        }
        int max_overall_height=0;
        for(int i=1;i<m;i++){
            int id1 = restrictions[i-1][0], h1 = restrictions[i-1][1];
            int id2 = restrictions[i][0], h2 = restrictions[i][1];
            int dist = id2 - id1;
            int peak = ((long long)h1 + h2 + dist) / 2;
            max_overall_height = max(max_overall_height, peak);
        }
        int last_id = restrictions.back()[0];
        int last_h = restrictions.back()[1];
        max_overall_height = max(max_overall_height, last_h + (n - last_id));
        return max_overall_height;
    }
};
