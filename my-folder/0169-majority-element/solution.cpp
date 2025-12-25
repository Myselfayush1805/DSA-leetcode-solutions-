class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int element=0;
        int count=0;
        for (int n:nums){
            if(count==0){
                element=n;
            }
            if(n==element){
                count++;
            }
            else{
                count--;
            }
        }  
        return element;
    }      
};
