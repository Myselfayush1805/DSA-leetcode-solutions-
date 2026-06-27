class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> res;
        for(int i=0;i<l.size();i++){
            vector<int> sub(nums.begin()+l[i],nums.begin()+r[i]+1);
            sort(sub.begin(),sub.end());
            int diff=sub[1]-sub[0];
            bool isbool=true;
            for(int k=2;k<sub.size();k++){
                if(sub[k]-sub[k-1]!=diff){
                    isbool=false;
                    break;
                }
            }
            res.push_back(isbool);
        }       
        return res;
    }
};
