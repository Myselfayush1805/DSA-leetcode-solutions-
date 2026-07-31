class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int> freq;
        vector<int> nums;
        int total=0;
        for(char c:word) freq[c]++;
        for(auto& pair:freq) nums.push_back(pair.second);
        sort(nums.rbegin(),nums.rend());
        for(int i=0;i<nums.size();i++){
            int push=(i/8)+1;
            total+=push*nums[i];
        }
        return total;
    }
};
