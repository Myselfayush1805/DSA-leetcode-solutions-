class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        int sum=numOnes+numZeros;
        if(sum>=k) return min(numOnes,k);
        else return numOnes-(k-sum);
    }
};
