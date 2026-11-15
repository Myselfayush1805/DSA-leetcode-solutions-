class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int MOD=1e9+7;
        int sum=0;
        int even=1;
        int odd=0;   
        int count=0;
        for(int n:arr){
            sum+=n;
            if(sum%2==0){
                count+=odd;
                even++;
            }
            else{
                count+=even;
                odd++;
            }
            count%=MOD;
        }
        return count;
    }
};
