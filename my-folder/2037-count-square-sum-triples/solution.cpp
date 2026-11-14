class Solution {
public:
    int countTriples(int n) {
        int count=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i==j) continue;
                int sum=(i*i)+(j*j);
                int c=sqrt(sum);
                if(c*c==sum && c<=n) count++;
            }
        }        
        return count;
    }
};
