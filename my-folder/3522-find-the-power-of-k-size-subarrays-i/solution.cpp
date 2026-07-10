class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        vector<int> res;
        int i=0;
        int j=k;
        while(j<=nums.size()){
            bool isValid=true;
            for(int a=i;a<j-1;a++){
                if(nums[a+1]!=nums[a]+1){
                    isValid=false;
                    break;
                }
            }    
            if(isValid) res.push_back(nums[j-1]);
            else res.push_back(-1);
            i++;
            j++;    
        }
        return res;
    }
};
