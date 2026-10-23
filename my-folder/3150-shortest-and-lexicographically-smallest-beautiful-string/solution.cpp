class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int i=0;
        int count=0;
        string ans="";
        int minLen=s.size()+1;
        for(int j=i;j<s.size();j++){
            if(s[j]=='1') count++;
            while(count==k){
                if((j-i+1)<minLen){
                    minLen=j-i+1;
                    ans=s.substr(i,j-i+1);
                }
                else if((j-i+1)==minLen && s.substr(i,j-i+1)<ans) ans=s.substr(i,j-i+1);
                if(s[i]=='1') count--;
                i++;
            }
        }       
        return ans; 
    }
};
