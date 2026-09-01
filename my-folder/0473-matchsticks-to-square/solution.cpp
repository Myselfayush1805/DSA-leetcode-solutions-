class Solution {
public:
    bool makesquare(vector<int>& matchsticks) {    
        int sum=accumulate(matchsticks.begin(),matchsticks.end(),0);
        if(sum%4!=0) return false;
        int target=sum/4;
        vector<int> temp(4,0);
        sort(matchsticks.rbegin(),matchsticks.rend());
        return backtrack(temp,matchsticks,0,target);         
    }
    bool backtrack(vector<int>& temp, vector<int>& matchsticks, int idx, int target) {
        if(idx==matchsticks.size()) return true;
        for(int i=0;i<4;i++){
            if(temp[i]+matchsticks[idx]<=target){
                temp[i]+=matchsticks[idx];
                if(backtrack(temp,matchsticks,idx+1,target)) return true;
                temp[i]-=matchsticks[idx];
            }
            if(temp[i]==0) break;
        }
        return false;
    }
};
