class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int res=0;
        for(auto c:operations){
            if(c=="++X" ||c=="X++") res++;
            else res--;
        }        
        return res;
    }
};
