class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int count=0;
        for(int i=num1;i<=num2;i++){
            if(i<100) continue;
            int temp=i;
            int digits[6];
            int len=0;
            while(temp>0){
                digits[len++]=temp%10;
                temp/=10;
            }
            for(int j=1;j<len-1;j++){
                if(digits[j]>digits[j+1] && digits[j]>digits[j-1]) count++;
                else if(digits[j]<digits[j-1] && digits[j]<digits[j+1]) count++;
            }
        }        
        return count;
    }
};
