class Solution {
public:
    int countHomogenous(string s) {     
        int total=0;
        int MOD=1e9+7;
        int count=1;
        for(int i=0;i<s.size();i++){
            if(i>0 && s[i]==s[i-1]) count++;
            else count=1;
            total=(total+count)%MOD;
        }
        return total;
    }
};
