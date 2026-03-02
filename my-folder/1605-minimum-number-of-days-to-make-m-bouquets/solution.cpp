class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        if(1LL*m*k>n) return -1;   
        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            int bouquets=0;
            int consecutive=0;
            for(int day:bloomDay){
                if(day<=mid){
                    consecutive++;
                    if(consecutive==k){
                        bouquets++;
                        consecutive=0;
                    }
                }
                else consecutive=0;
            }
            if(bouquets>=m){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};
