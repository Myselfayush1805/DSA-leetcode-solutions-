class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(heaters.begin(),heaters.end());
        int max_dist=0;
        for(int n:houses){
            auto it=lower_bound(heaters.begin(),heaters.end(),n);
            int dist_left=INT_MAX;
            int dist_right=INT_MAX;
            if(it!=heaters.end()) dist_right=*it-n;
            if(it!=heaters.begin()) dist_left=n-*(it-1);
            int min_dist=min(dist_left,dist_right);
            max_dist=max(min_dist,max_dist);
        }      
        return max_dist;
    }
};
