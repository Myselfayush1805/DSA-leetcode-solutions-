class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum=0;
        int maxSum=0;
        for(int n:gain){
            sum+=n;
            maxSum=max(maxSum,sum);
        }        
        return maxSum;
    }
};
