class Solution {
private:
    int getValue(char c){
        if(c=='I') return 1;
        if(c=='V') return 5;
        if(c=='X') return 10;
        if(c=='L') return 50;
        if(c=='C') return 100;
        if(c=='D') return 500;
        if(c=='M') return 1000;
        return 0;
    }
public:
    int romanToInt(string s) {
        int sum=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            int currVal=getValue(s[i]);
            if(i<n && currVal<getValue(s[i+1])) sum-=currVal;
            else sum+=currVal;
        }    
        return sum;
    }
};
