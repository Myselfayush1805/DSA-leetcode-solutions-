class Solution {
public:
    int longestContinuousSubstring(string s) {
        if(s.size()==1) return 1;
        string check="abcdefghijklmnopqrstuvwxyz";
        int maxSize=1;
        int i=0;
        for(int j=1;j<s.size();j++){
            string sub=s.substr(i,j-i+1);
            if(check.contains(sub)) maxSize=(maxSize,sub.size());
            else i++;
        } 
        return maxSize;
    }
};
