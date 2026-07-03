class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int i=0;
        int j=k-1;
        int minOperations=INT_MAX;
        while(j<blocks.size()){
            int count=0;
            for(int a=i;a<=j;a++){
                if(blocks[a]=='W') count++;
            }
            minOperations=min(minOperations,count);
            i++;
            j++;
        }
        return minOperations;
    }
};
