class Solution {
public:
    int minInsertions(string s) {  
        int openCount=0;
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') openCount++;
            else{
                if(s[i+1]==')') i++;
                else count++;
                if(openCount!=0) openCount--;
                else count++;
            }
        }     
        return count+(2*openCount);
    }
};
