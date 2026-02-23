class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(),weights.end(),0);
        int ans=high;
        while(low<=high){
            int mid=low+(high-low)/2;
            int daysNeeded=1;
            int currentLoad=0;
            for(int w:weights){
                if(currentLoad+w>mid){
                    daysNeeded++;
                    currentLoad=0;
                }
                currentLoad+=w;
            }
            if(daysNeeded<=days){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        } 
        return ans;    
    }
};
