class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int minCount=INT_MAX;
        for(int x=0;x<k;x++){
            for(int y=0;y<k;y++){
                if(x==y) continue;
                int count=0;
                for(int i=0;i<nums.size();i++){
                    int r=nums[i]%k;
                    int target=(i%2==0) ? x:y;
                    int costUp=(target-r+k)%k;
                    int costDown=(r-target+k)%k;
                    count+=min(abs(costUp),abs(costDown));
                }
                minCount=min(minCount,count);
            }
        }
        return minCount;
    }
};
