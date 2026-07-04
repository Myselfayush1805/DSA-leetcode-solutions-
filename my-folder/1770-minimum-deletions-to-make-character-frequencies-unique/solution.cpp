class Solution {
public:
    int minDeletions(string s) {
        int count=0;
        vector<int> nums(26,0);
        for(char c:s) nums[c-'a']++;
        sort(nums.rbegin(),nums.rend());
        for(int i=1;i<nums.size();i++){
            if(nums[i]==0) break;
            if(nums[i]>=nums[i-1]){
                int allowed_freq=max(0,nums[i-1]-1);
                count+=nums[i]-allowed_freq;
                nums[i]=allowed_freq;
            }
        }      
        return count;
    }
};
