class Solution {
public:
    bool areNumbersAscending(string s) {
        int prev=-1;
        int i=0;
        while(i<s.size()){
            if(isdigit(s[i])){
                int current=0;
                while(i<s.size() && isdigit(s[i])){
                    current=current*10+(s[i]-'0');
                    i++;
                }
                if(current<=prev) return false;
                prev=current;
            }
            else i++;
        }
        return true;
    }
};
