class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n=mat.size();
        for(int i=0;i<4;i++){
            for(int i=0;i<n;i++){
                for(int j=i;j<n;j++){
                    swap(mat[i][j],mat[j][i]);
                }
                int left=0;
                int right=n-1;
                while(left<right){
                    swap(mat[i][left],mat[i][right]);
                    left++;
                    right--;
                }
            }
            if(mat==target) return true;
        }      
        return false;
    }
};
