class Solution {
public:
    string largestGoodInteger(string num) {
        char max=' ';
        for(int i=1;i<num.size()-1;i++){
            if(num[i-1]==num[i] && num[i]==num[i+1]){
                if(max==' ' || max<num[i]) max=num[i];
            }
        }       
        return max==' '? "":string(3,max);
    }
};
