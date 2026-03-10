class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> res;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> mh;
        for(int i=0;i<mat.size();i++){
            int count=0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1) count++;
                else break;
            }
            mh.push({count,i});
        }  
        for(int i=0;i<k;i++){
            res.push_back(mh.top().second);
            mh.pop();
        }    
        return res;
    }
};
