class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {      
        int n=grid.size();
        int m=grid[0].size();
        int size=n*m;
        vector<vector<int>> res(n,vector<int>(m,0));
        for(int r=0;r<n;r++){
            for(int c=0;c<m;c++){
                int idx=r*m+c;
                int newIdx=(idx+k)%size;
                int new_r=newIdx/m;
                int new_c=newIdx%m;
                res[new_r][new_c]=grid[r][c];
            }
        }
        return res;
    }
};
