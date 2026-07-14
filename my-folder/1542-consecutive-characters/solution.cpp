class Solution {
public:
    int maxPower(string s) {
        int power=0;
        int count=1;
        for(int i=0;i<s.size();i++){
            if(i>0 && s[i]==s[i-1]) count++;
            else count=1;
            power=max(power,count);
        }        
        return power;
    }
};
