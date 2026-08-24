class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        for(int n=left;n<=right;n++){
            int temp=n;
            bool isValid=true;
            while(temp>0){
                int digit=temp%10;
                if(digit==0 || n%digit!=0) isValid=false;
                temp/=10;
            }
            if(isValid) res.push_back(n);
        }        
        return res;
    }
};
