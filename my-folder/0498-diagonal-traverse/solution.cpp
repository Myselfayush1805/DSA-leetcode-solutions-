class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        vector<int> res;
        res.reserve(m*n);
        for(int s=0;s<m+n-1;s++){
            if(s%2==0){
                int r=min(s,m-1);
                int c=s-r;
                while(r>=0 && c<n){
                    res.push_back(mat[r][c]);
                    r--;
                    c++;
                }
            } 
            else{
                int c=min(s,n-1);
                int r=s-c;
                while(r<m && c>=0){
                    res.push_back(mat[r][c]);
                    r++;
                    c--;
                }
            }
        }
        return res;
    }
};
