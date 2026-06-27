class Solution {
public:
    int maximumLength(vector<int>& nums) {
        unordered_map<long long,int> mp;
        for(int n:nums) mp[n]++;
        int maxNums=0;
        if(mp[1]>0){
            if(mp[1]%2==0) maxNums=max(maxNums,mp[1]-1);
            else maxNums=max(maxNums,mp[1]);
        }
        for(int n:nums){
            if(n==1) continue;
            int count=0;
            long long curr=n;
            while(mp[curr]>0){
                if(mp[curr]>=2){
                    count+=2;
                    curr=curr*curr;
                }
                else if(mp[curr]==1){
                    count++;
                    break;
                }
            }
            if(mp[curr]==0 && count>0) count--;
            maxNums=max(maxNums,count);
        }        
        return maxNums;
    }
};
