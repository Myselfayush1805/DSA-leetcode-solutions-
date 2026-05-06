class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int m=boxGrid.size();
        int n=boxGrid[0].size();
        for(int i=0;i<m;i++){
            int slow=n-1;
            for(int fast=n-1;fast>=0;fast--){
                if(boxGrid[i][fast]=='#'){
                    swap(boxGrid[i][slow],boxGrid[i][fast]);
                    slow--;
                }
                else if(boxGrid[i][fast]=='*') slow=fast-1;
            }
        }        
        vector<vector<char>> res(n,vector<char>(m));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                res[j][m-1-i]=boxGrid[i][j];
            }
        }
        return res;
    }
};
