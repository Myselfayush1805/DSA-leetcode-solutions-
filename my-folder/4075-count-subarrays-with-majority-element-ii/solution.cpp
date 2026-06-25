class Solution {
public:
    long long countMajoritySubarrays(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> freq(n*2+5,0);
        int offset=n+2;
        int pref_sum=0;
        freq[pref_sum+offset]=1;
        int count=0;
        long long total_subarrays=0;
        for(int n:nums){
            int old_sum=pref_sum;
            if(n==target){
                pref_sum++;
                count+=freq[old_sum+offset];
            }
            else{
                pref_sum--;
                count-=freq[pref_sum+offset];
            }
            freq[pref_sum+offset]++;
            total_subarrays+=count;
        }
        return total_subarrays;
    }
};
