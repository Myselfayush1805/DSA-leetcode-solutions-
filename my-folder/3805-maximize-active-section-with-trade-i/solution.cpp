class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) { 
        int countOne=0;
        int n=s.size();
        for(char c:s){
            if(c=='1') countOne++;
        }       
        int maxOnes=countOne;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                int countLeft=0;
                int countRight=0;
                int start=i;
                int end=i;
                while(end+1<n && s[end+1]=='1') end++;
                int l=start-1;
                while(l>=0 && s[l]=='0'){
                    countLeft++;
                    l--;
                }
                int r=end+1;
                while(r<n && s[r]=='0'){
                    countRight++;
                    r++;
                }
                if(countLeft>0 && countRight>0) maxOnes=max(maxOnes,countOne+countLeft+countRight);
                i=end;
            }
        }
        return maxOnes;
    }
};
