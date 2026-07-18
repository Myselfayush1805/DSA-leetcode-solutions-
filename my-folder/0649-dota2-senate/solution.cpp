class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> rad,dir;
        int n=senate.size();
        for(int i=0;i<n;i++){
            if(senate[i]=='R') rad.push(i);
            else dir.push(i);
        }
        while(!rad.empty() && !dir.empty()){
            int rIdx=rad.front();
            int dIdx=dir.front();
            if(rIdx<dIdx) rad.push(rIdx+n);
            else dir.push(dIdx+n);
            rad.pop();
            dir.pop();
        }
        return(rad.empty()) ? "Dire":"Radiant";
    }
};
