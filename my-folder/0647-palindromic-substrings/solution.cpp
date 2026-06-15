class Solution {
public:
    int countSubstrings(string s) {
        int n=s.size();
        int count=0;
        for(int i=0;i<n;i++){
            int l=i;
            int r=i;
            while(l>=0 && r<n){
                if(s[l]==s[r]) count++;
                else break;
                l--;
                r++;
            }
            l=i;
            r=i+1;
            while(l>=0 && r<n){
                if(s[l]==s[r]) count++;
                else break;
                l--;
                r++;
            }
        }    
        return count;
    }
};
