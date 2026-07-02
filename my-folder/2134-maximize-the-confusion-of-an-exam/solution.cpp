class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int count=0;
        int n=k;
        int i=0;
        for(int j=0;j<answerKey.size();j++){
            if(answerKey[j]=='T') k--;
            while(k<0){
                if(answerKey[i]=='T') k++;
                i++;
            }
            count=max(count,j-i+1);
        }
        k=n;
        i=0;
        for(int j=0;j<answerKey.size();j++){
            if(answerKey[j]=='F') k--;
            while(k<0){
                if(answerKey[i]=='F') k++;
                i++;
            }
            count=max(count,j-i+1);
        }
        return count;
    }
};
