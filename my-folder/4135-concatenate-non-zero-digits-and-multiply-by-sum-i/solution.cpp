class Solution {
public:
    long long sumAndMultiply(int n) {
        string s=to_string(n);
        s.erase(remove(s.begin(),s.end(),'0'),s.end());
        if(s.empty()) return 0;
        long long num=stoll(s);
        long long sum=0;
        for(char c:s) sum+=c-'0';       
        return num*sum;
    }
};
