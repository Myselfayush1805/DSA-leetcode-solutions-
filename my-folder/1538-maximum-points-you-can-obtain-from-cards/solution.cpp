class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int i=0;
        int j=k-1;
        int sum=0;
        int maxSum=0;
        for(int a=i;a<=j;a++){
            sum+=cardPoints[a];
        }      
        maxSum=max(maxSum,sum);
        int b=n-1;
        for(int a=k-1;a>=0;a--){
            sum-=cardPoints[a];
            sum+=cardPoints[b];
            maxSum=max(maxSum,sum);
            b--;
        }
        return maxSum;
    }
};
