class Solution {
public:
    char processStr(string s, long long k) {
        int n=s.size();
        vector<long long> length(n,0);
        long long currLen=0;
        for(int i=0;i<n;i++){
            char c=s[i];
            if(c=='*') currLen=max(currLen-1,0LL);
            else if(c=='#') currLen*=2;
            else if(c=='%'){}
            else currLen++;
            length[i]=currLen;
        }
        if(k>=length[n-1]) return '.';
        for(int i=n-1;i>=0;i--){
            char c=s[i];
            long long prevLen=(i>0)? length[i-1]:0; 
            if(c=='#'){
                if(k>=prevLen) k-=prevLen;
            }
            else if(c=='%') k=prevLen-1-k;
            else if(c=='*'){}
            else{
                if(k==prevLen) return c;
            }
        }
        return '.';
    }
};
