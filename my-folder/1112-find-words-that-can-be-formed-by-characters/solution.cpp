class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int freqChars[26]={0};
        int sum=0;
        for(char c:chars) freqChars[c-'a']++;
        for(const string& word:words){
            int freqN[26]={0};
            for(char c:word) freqN[c-'a']++;
            bool canForm=true;
            for(int k=0;k<26;k++){
                if(freqN[k]>freqChars[k]){
                    canForm=false;
                    break;
                }
            }
            if(canForm) sum+=word.size();
        }        
        return sum;
    }
};
