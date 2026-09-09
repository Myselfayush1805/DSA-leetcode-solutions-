class Solution {
public:
    long long countCommas(long long n) {
        long long total=0;
        long long limit=1000LL;
        while(n>=limit){
            total+=(n-limit+1);
            limit*=1000LL;
        }     
        return total;
    }
};
