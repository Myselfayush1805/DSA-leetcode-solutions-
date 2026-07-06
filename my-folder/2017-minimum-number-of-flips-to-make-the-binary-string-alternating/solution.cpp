class Solution {
public:
    int minFlips(string s) {      
        int n=s.size();
        s+=s;
        string patternA="";
        string patternB="";
        for(int i=0;i<s.size();i++){
            patternA+=(i%2==0) ? '1':'0';
            patternB+=(i%2==0) ? '0':'1';
        }
        int min_flips=INT_MAX;
        int flipsA=0;
        int flipsB=0;
        for(int i=0;i<s.size();i++){
            if(s[i]!=patternA[i]) flipsA++;
            if(s[i]!=patternB[i]) flipsB++;
            if(i>=n){
                if(s[i-n]!=patternA[i-n]) flipsA--;
                if(s[i-n]!=patternB[i-n]) flipsB--;
            }
            if(i>=n-1) min_flips=min({min_flips,flipsA,flipsB});
        }
        return min_flips;
    }
};
