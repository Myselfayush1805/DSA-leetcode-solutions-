class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int element1=0, element2=0;
        int count1=0, count2=0;
        for(int num:nums){
            if(num==element1){
                count1++;
            }
            else if(num==element2){
                count2++;
            }
            else if(count1==0){
                element1=num;
                count1=1;
            }
            else if(count2==0){
                element2=num;
                count2=1;
            }
            else{
                count1--;
                count2--;
            }
        }
        int realcount1=0, realcount2=0;
        for (int num:nums){
            if(num==element1){
                realcount1++;
            }
            else if(num==element2){
                realcount2++;
            }
        }
        vector<int> result;
        int n=nums.size();
        if(realcount1>n/3){
            result.push_back(element1);
        }
        if(realcount2>n/3){
            result.push_back(element2);
        }
        return result;
    }
};
