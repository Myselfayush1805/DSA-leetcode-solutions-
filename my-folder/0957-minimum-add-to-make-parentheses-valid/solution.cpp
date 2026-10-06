class Solution {
public:
    int minAddToMakeValid(string s) {
        int countOpen=0;
        int countClose=0;
        for(char c:s){
            if(c=='(') countOpen++;
            else if(c==')' && countOpen>0) countOpen--;
            else countClose++;
        }                
        return countOpen+countClose;
    }
};
