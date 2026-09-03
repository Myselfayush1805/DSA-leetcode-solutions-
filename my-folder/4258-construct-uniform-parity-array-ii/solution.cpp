class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int minNum=*min_element(nums1.begin(),nums1.end());
        if(minNum%2!=0) return true;
        else{
            for(int n:nums1){
                if(n%2!=0) return false;
            }
            return true;
        }       
    }
};
