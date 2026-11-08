class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int count=0;
        vector<int> nums;
        for(const auto& n:rectangles){
            int a=min(n[0],n[1]);
            nums.push_back(a);
        }        
        int maxElement=*max_element(nums.begin(),nums.end());
        for(int n:nums){
            if(n==maxElement) count++;
        }
        return count;
    }
};
