class Solution {
public:
    string removeOuterParentheses(string s) {
        int opened=0;
        string res="";
        for(char c:s){
            if(c=='('){
                if(opened>0) res+=c;
                opened++;
            }
            else{
                opened--;
                if(opened>0) res+=c;
            }
        }        
        return res;
    }
};
