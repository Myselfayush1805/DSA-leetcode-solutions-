class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;   
        for(int i=0;i<numRows;i++){
            vector<int> row;
            int val=1;
            for(int j=0;j<=i;j++){
                row.push_back(val);
                val=val*(i-j)/(j+1);
            }
            res.push_back(row);
        }     
        return res;
    }
};
