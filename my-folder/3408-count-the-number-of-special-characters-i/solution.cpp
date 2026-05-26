class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<bool> upper(26,false);
        vector<bool> lower(26,false);
        int count=0;      
        for(char c:word){
            if(c>='a' && c<='z') lower[c-'a']=true;
            else if(c>='A' && c<='Z') upper[c-'A']=true;
        }
        for(int i=0;i<26;i++){
            if(lower[i] && upper[i]) count++;
        }
        return count;
    }
};
