class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n,vector(n,0));  
        int top=0;
        int bottom=n-1;
        int left=0; 
        int right=n-1;
        int counter=1;
        while(top<=bottom && left<=right){
            for(int j=left;j<=right;j++){
                res[top][j]=counter++;
            }
            top++;
            for(int i=top;i<=bottom;i++){
                res[i][right]=counter++;
            }
            right--;
            if(top<=bottom && left<=right){
                for(int j=right;j>=left;j--){
                    res[bottom][j]=counter++;
                }
                bottom--;
                for(int i=bottom;i>=top;i--){
                    res[i][left]=counter++;
                }
                left++;
            }
        }     
        return res;
    }
};
