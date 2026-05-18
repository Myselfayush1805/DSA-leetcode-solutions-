class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> odd;
        vector<int> even;
        vector<int> res(nums.size());
        for(int i=0;i<nums.size();i++){
            if(i%2==0) even.push_back(nums[i]);
            else odd.push_back(nums[i]);
        }
        sort(even.begin(),even.end());
        sort(odd.rbegin(),odd.rend());
        int evenIdx=0;
        int oddIdx=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                res[i]=even[evenIdx];
                evenIdx++;
            }
            else{
                res[i]=odd[oddIdx];
                oddIdx++;
            }
        }
        return res;
    }
};
