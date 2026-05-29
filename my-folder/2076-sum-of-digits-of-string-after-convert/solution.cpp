class Solution {
public:
    int getLucky(string s, int k) {
        int sum=0;
        for(char c:s){
            int n=c-'a'+1;
            while(n>0){
                sum+=n%10;
                n/=10;
            }
        }    
        k--;
        while(k>0){
            int temp_sum=0;
            while(sum>0){
                temp_sum+=sum%10;
                sum/=10;
            }
            k--;
            sum=temp_sum;
        }    
        return sum;
    }
};
