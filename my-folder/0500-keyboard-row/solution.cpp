class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> res;
        unordered_map<char,int> rows;
        for(char c:"qwertyuiop") rows[c]=1;
        for(char c:"asdfghjkl") rows[c]=2;
        for(char c:"zxcvbnm") rows[c]=3;
        for(string s:words){
            bool isValid=true;
            int targetRow=rows[tolower(s[0])];
            for(char c:s){
                if(rows[tolower(c)]!=targetRow){
                    isValid=false;
                    break;
                }
            }
            if(isValid) res.push_back(s);
        }    
        return res;
    }
};
