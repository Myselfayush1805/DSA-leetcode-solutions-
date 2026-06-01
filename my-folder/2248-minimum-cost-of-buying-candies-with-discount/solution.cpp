class Solution {
public:
    int minimumCost(vector<int>& cost) {
        if(cost.size()<3) return accumulate(cost.begin(),cost.end(),0);
        sort(cost.begin(),cost.end());
        int sum=0;
        int count=0;
        for(int i=cost.size()-1;i>=0;i--){
            count++;
            if(count%3!=0) sum+=cost[i];
        }      
        return sum;
    }
};
