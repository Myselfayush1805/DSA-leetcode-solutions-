class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> res;
        for(int len=2;len<=9;len++){
            int num=0;
            int add=0;
            for(int i=1;i<=len;i++){
                num=num*10+i;
                add=add*10+1;
            }
            while(true){
                if(num>=low && num<=high) res.push_back(num);
                if(num>high) break;
                if(num%10==9) break;
                num+=add;
            }
        }       
        return res;
    }
};
