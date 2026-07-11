class Solution {
public:
    int captureForts(vector<int>& forts) {
        int j=-1;
        int maxLen=0;
        for(int i=0;i<forts.size();i++){
            if(forts[i]!=0){
                if(j!=-1 && forts[i]+forts[j]==0) maxLen=max(maxLen,i-j-1);
                j=i;
            }
        }    
        return maxLen;
    }
};
