class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count=0;
        for(int n=low;n<=high;n++){
            string s=to_string(n);
            if(s.size()%2!=0) continue;
            int l=0;
            int r=s.size()-1;
            int sumL=0;
            int sumR=0;
            while(l<=r){
                sumL+=s[l]-'0';
                sumR+=s[r]-'0';
                l++;
                r--;
            }
            if(sumL==sumR) count++;
        } 
        return count;       
    }
};
