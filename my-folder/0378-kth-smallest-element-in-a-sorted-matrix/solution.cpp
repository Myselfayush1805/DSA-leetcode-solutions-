class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) { 
        int n=matrix.size();  
        int low=matrix[0][0];
        int high=matrix[n-1][n-1];
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            int count=0;
            for(int i=0;i<n;i++){
                int j=matrix[i].size()-1;
                while(j>=0 && matrix[i][j]>mid) j--;
                count+=(j+1);
            }
            if(count>=k){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};
