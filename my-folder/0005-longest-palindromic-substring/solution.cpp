class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int start=0;
        int maxLen=1;
        for(int i=0;i<n;i++){
            int l=i;
            int r=i;
            while(l>=0 && r<n && s[l]==s[r]){
                int currLen=r-l+1;
                if(currLen>maxLen){
                    maxLen=currLen;
                    start=l;
                }
                l--;
                r++;
            }
            l=i;
            r=i+1;
            while(l>=0 && r<n && s[l]==s[r]){
                int currLen=r-l+1;
                if(currLen>maxLen){
                    maxLen=currLen;
                    start=l;
                }
                l--;
                r++;
            }
        } 
        return s.substr(start,maxLen);
    }
};
