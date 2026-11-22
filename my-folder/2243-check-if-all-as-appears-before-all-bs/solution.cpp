class Solution {
public:
    bool checkString(string s) {
        int aIdx=INT_MIN;
        int bIdx=INT_MAX;
        for(int i=0;i<s.size();i++){
            (s[i]=='a') ? aIdx=max(aIdx,i) : bIdx=min(bIdx,i);
        }        
        return aIdx<bIdx;
    }
};
