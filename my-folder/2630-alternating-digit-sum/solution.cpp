class Solution {
public:
    int alternateDigitSum(int n) {
        string str=to_string(n);
        int sum=0;
        for(char c=0;c<str.size();c++){
            int num=str[c]-'0';
            if(c%2==0) sum+=num;
            else sum-=num;
        }        
        return sum;
    }
};
