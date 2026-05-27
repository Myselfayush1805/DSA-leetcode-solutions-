class Solution {
public:
    string greatestLetter(string s) {
        vector<int> lower(26,-1);
        vector<int> upper(26,-1);
        int greater=-1;
        for(int i=0;i<s.size();i++){
            if(s[i]>='a' && s[i]<='z') lower[s[i]-'a']=s[i]-'a';
            else if(s[i]>='A' && s[i]<='Z') upper[s[i]-'A']=s[i]-'A';
        }       
        for(int i=0;i<26;i++){
            if(lower[i]!=-1 && upper[i]!=-1) greater=max(greater,i);
        }
        return greater==-1? "" : string(1,'A'+greater);
    }
};
