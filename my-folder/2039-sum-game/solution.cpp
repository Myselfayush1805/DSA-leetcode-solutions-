class Solution {
public:
    bool sumGame(string num) {     
        int n=num.size(); 
        int leftQues=0;
        int leftSum=0;
        for(int i=0;i<n/2;i++){
            if(num[i]=='?') leftQues++;
            else leftSum+=(num[i]-'0');
        }        
        int rightQues=0;
        int rightSum=0;
        for(int i=n/2;i<n;i++){
            if(num[i]=='?') rightQues++;
            else rightSum+=(num[i]-'0');
        }
        int quesDiff=rightQues-leftQues;
        int sumDiff=leftSum-rightSum;
        int total=leftQues+rightQues;
        return (total%2==1) || (sumDiff!=9*quesDiff/2);
    }
};
