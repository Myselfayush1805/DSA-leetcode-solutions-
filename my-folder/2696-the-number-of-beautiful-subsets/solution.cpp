class Solution {
public:
    int beautifulSubsets(vector<int>& nums, int k) {
        int count=0;
        vector<int> temp;
        backtrack(count,temp,nums,k,0);
        return count;        
    }
private:
    void backtrack(int& count, vector<int>& temp, vector<int>& nums, int& k, int idx){
        if(idx==nums.size()) return;
        backtrack(count,temp,nums,k,idx+1);
        bool isValid=true;
        for(int i=0;i<temp.size();i++){
            if(abs(temp[i]-nums[idx])==k){
                isValid=false;
                break;
            }
        }
        if(isValid){
            temp.push_back(nums[idx]);
            count++;
            backtrack(count,temp,nums,k,idx+1);
            temp.pop_back();
        }
    }
};
