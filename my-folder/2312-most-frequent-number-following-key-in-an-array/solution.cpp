class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        unordered_map<int,int> freq;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==key) freq[nums[i+1]]++;
        }
        int count=0;
        int target=0;
        for(const auto&[num,value]:freq){
            if(value>count){
                target=num;
                count=value;
            }
        }
        return target;
    }
};
