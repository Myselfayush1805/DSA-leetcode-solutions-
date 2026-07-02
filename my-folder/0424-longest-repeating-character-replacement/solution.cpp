class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxSize=0;
        int maxWindow=0;
        int i=0;
        vector<int> count(26,0);
        for(int j=0;j<s.size();j++){
            count[s[j]-'A']++;
            maxSize=max(maxSize,count[s[j]-'A']);
            while((j-i+1)-maxSize>k){
                count[s[i]-'A']--;
                i++;
            }
            maxWindow=max(maxWindow,j-i+1);
        }
        return maxWindow;
    }
};
