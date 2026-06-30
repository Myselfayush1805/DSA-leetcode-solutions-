class Solution {
public:
    int numberOfSubstrings(string s) {  
        int idx[3]={-1,-1,-1};
        int total=0;
        for(int i=0;i<s.size();i++){
            idx[s[i]-'a']=i;
            int minIdx=min({idx[0],idx[1],idx[2]});
            if(minIdx!=-1) total+=minIdx+1;
        }
        return total;
    }
};
