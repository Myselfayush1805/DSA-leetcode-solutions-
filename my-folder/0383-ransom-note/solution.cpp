class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int freqRN[26]={0};
        int freqMZ[26]={0};  
        for(char c:ransomNote) freqRN[c-'a']++;
        for(char c:magazine) freqMZ[c-'a']++;
        for(int i=0;i<26;i++){
            if(freqRN[i]>freqMZ[i]) return false;
        }      
        return true;
    }
};
