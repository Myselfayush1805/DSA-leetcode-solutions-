class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n=nums.size();
        int minTotal=INT_MAX;
        vector<int> freqEven(100005,0);
        vector<int> freqOdd(100005,0);
        for(int i=0;i<n;i++){
            if(i%2==0) freqEven[nums[i]]++;
            else freqOdd[nums[i]]++;
        }
        int even1_val=0, even1_freq=0;
        int even2_val=0, even2_freq=0;
        int odd1_val=0, odd1_freq=0;
        int odd2_val=0, odd2_freq=0;
        for(int i=1;i<=100000;i++){
            if(freqEven[i]>even1_freq){
                even2_freq=even1_freq;
                even2_val=even1_val;
                even1_freq=freqEven[i];
                even1_val=i;
            }
            else if(freqEven[i]>even2_freq){
                even2_freq=freqEven[i];
                even2_val=i;
            }
            if(freqOdd[i]>odd1_freq){
                odd2_freq=odd1_freq;
                odd2_val=odd1_val;
                odd1_freq=freqOdd[i];
                odd1_val=i;
            }
            else if(freqOdd[i]>odd2_freq){
                odd2_freq=freqOdd[i];
                odd2_val=i;
            }
        }
        int max_kept=0;
        if(even1_val!=odd1_val) max_kept=even1_freq+odd1_freq;
        else max_kept=max(even1_freq+odd2_freq,even2_freq+odd1_freq);
        return n-max_kept;
    }
};
