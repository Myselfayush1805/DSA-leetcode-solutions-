class Solution {
public:
    int minimumDeletions(string s) {
        int count=0;
        int b_count=0;
        for(char c:s){
            if(c=='b'){
                b_count++;
            }
            else if(c=='a'){
                if(b_count>0){
                    b_count--;
                    count++;
                }
            }
        }               
        return count;
    }
};
