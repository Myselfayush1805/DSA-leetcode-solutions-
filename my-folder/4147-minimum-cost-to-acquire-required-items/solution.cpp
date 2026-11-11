class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long individual=(1LL*cost1*need1)+(1LL*cost2*need2);
        long long pack=1LL*max(need2,need1)*costBoth;
        int diff=max(need1,need2)-min(need1,need2);
        int cost=(need1>need2) ? cost1:cost2;
        long long both=(1LL*min(need1,need2)*costBoth)+(1LL*diff*cost);
        return min({individual,pack,both});        
    }
};
