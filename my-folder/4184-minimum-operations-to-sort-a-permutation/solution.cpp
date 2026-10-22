class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        int zeroIdx=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                zeroIdx=i;
                break;
            }
        }      
        bool isIncreasing=true;
        for(int i=0;i<n;i++){
            if(nums[(zeroIdx+i)%n]!=i){
                isIncreasing=false;
                break;
            }
        }
        if(isIncreasing) return min(zeroIdx,n-zeroIdx+2);
        bool isDecreasing=true;
        for(int i=0;i<n;i++){
            if(nums[(zeroIdx-i+n)%n]!=i){
                isDecreasing=false;
                break;
            }
        }
        if(isDecreasing) return min(n-zeroIdx,((zeroIdx+1)%n)+1);
        return -1;
    }
};
