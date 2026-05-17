class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> res(nums.size());
        int i=0;
        int j=1;
        for(int n:nums){
            if(n%2==0){
                res[i]=n;
                i+=2;
            }
            else{
                res[j]=n;
                j+=2;
            }
        }
        return res;
    }
};
