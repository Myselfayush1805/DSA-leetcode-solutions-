class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        if(nums.size()%k!=0) return false;
        map<int,int> mp;
        for(int n:nums) mp[n]++;
        for(auto i=mp.begin();i!=mp.end();i++){
            int num=i->first;
            int count=i->second;
            if(count==0) continue;
            for(int j=1;j<k;j++){
                int nextnum=num+j;
                if(mp[nextnum]<count) return false;
                mp[nextnum]-=count;
            }
        }
        return true;
    }
};
