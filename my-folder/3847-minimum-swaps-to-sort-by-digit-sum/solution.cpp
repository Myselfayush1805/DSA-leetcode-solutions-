class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n=nums.size();
        vector<pair<pair<int,int>,int>> arr(n);
        for(int i=0;i<n;i++){
            arr[i]={{getDigitSum(nums[i]),nums[i]},i};
        }       
        sort(arr.begin(),arr.end());
        int count=0;
        vector<bool> visited(n,false);
        for(int i=0;i<n;i++){
            if(visited[i] || arr[i].second==i) continue;
            int cycle_len=0;
            int j=i;
            while(!visited[j]){
                visited[j]=true;
                j=arr[j].second;
                cycle_len++;
            }
            if(cycle_len>1) count+=(cycle_len-1);
        }
        return count;
    }
private:
    int getDigitSum(int num) {
        int sum=0;
        while(num>0){
            sum+=num%10;
            num/=10;
        }
        return sum;
    }
};
