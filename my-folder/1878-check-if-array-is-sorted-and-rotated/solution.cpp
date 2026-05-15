class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> sorted=nums;
        sort(sorted.begin(),sorted.end());
        for(int x=0;x<nums.size();x++){
            bool isSort=true;
            for(int i=0;i<nums.size();i++){
                if(nums[(i+x)%nums.size()]!=sorted[i]){
                    isSort=false;
                    break;
                }
            }
            if(isSort==true) return true;
        }       
        return false;
    }
};
