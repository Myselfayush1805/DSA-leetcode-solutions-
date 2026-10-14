class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(sum>9*num) return "";
        string s="";
        for(int i=1;i<=num;i++){
            int digit=min(9,sum);
            s+=(digit+'0');
            sum-=digit;
        }
        return (sum==0) ? s:"";
    }
};
