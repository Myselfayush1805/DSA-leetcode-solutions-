class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int even_count=0;
        for(int n:nums){
            int count=0;
            while(n>0){
                n/=10;
                count++;
            }
            if(count%2==0) even_count++;
        }  
        return even_count;      
    }
};
