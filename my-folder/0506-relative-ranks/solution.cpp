class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string>res(score.size());
        priority_queue<pair<int,int>>maxHeap;
        for(int i=0;i<score.size();i++){
            maxHeap.push({score[i],i});
        }
        int rank=1;
        while(!maxHeap.empty()){
            auto[sc,idx]=maxHeap.top();
            maxHeap.pop();
            if(rank==1) res[idx]="Gold Medal";
            else if(rank==2) res[idx]="Silver Medal";
            else if(rank==3) res[idx]="Bronze Medal";
            else res[idx]=to_string(rank);
            rank++;
        }
        return res;        
    }
};
