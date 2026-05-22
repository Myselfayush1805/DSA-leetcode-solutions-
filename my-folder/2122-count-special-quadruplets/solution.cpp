class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n=nums.size();
        int count=0;
        for(int c=0;c<n;c++){
            int b=c-1;
            for(int a=0;a<b;a++){
                mp[nums[a]+nums[b]]++;
            }
            for(int d=c+1;d<n;d++){
                int target=nums[d]-nums[c];
                if(mp.count(target)) count+=mp[target];
            }
        }
        return count;
    }
};
