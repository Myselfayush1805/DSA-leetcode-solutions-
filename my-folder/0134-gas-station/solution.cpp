class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        gas.insert(gas.end(),gas.begin(),gas.end());
        cost.insert(cost.end(),cost.begin(),cost.end());
        int start=0;
        int fuel=0;
        for(int i=0;i<2*n;i++){
            fuel+=gas[i]-cost[i];
            if(fuel<0){
                start=i+1;
                fuel=0;
            }
            else{
                if(i-start+1==n) return start;
            }
        }        
        return -1;
    }
};
