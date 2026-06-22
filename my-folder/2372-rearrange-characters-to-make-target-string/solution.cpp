class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        int freqS[26]={0};
        int freqTarget[26]={0};
        for(char c:s) freqS[c-'a']++;
        for(char c:target) freqTarget[c-'a']++;
        int maxCopies=INT_MAX;
        for(int i=0;i<26;i++){
            if(freqTarget[i]>0){
                maxCopies=min(maxCopies,freqS[i]/freqTarget[i]);
            }
        }               
        return maxCopies;
    }
};
