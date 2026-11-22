class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<bool> check(26,false);
        for(char c:sentence){
            (check[c-'a']=true);
        }      
        for(bool c:check){
            if(c==false) return false;
        }  
        return true;
    }
};
