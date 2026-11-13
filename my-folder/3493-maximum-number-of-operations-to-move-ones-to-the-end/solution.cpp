class Solution {
public:
    int maxOperations(string s) {
        int count=0;
        int ones=0;
        bool isValid=true;
        for(char c:s){
            if(c=='1'){
                ones++;
                isValid=true;
            }
            else if(c=='0' && isValid){
                count+=ones;
                isValid=false;
            }
        }   
        return count;
    }
};
