class Solution {
public:
    int monotoneIncreasingDigits(int n) {
        string s=to_string(n);
        int mark=s.size();
        for(int i=1;i<s.size();i++){
            if(s[i]<s[i-1]){
                while(i>0 && s[i]<s[i-1]){
                    s[i-1]--;
                    mark=i;
                    i--;
                }
                fill(s.begin()+mark,s.end(),'9');
                break;
            }
        }
        return stoi(s);
    }
};
