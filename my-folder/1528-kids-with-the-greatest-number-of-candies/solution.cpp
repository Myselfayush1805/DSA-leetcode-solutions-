class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        vector<bool> res(n,false);
        int a=*max_element(candies.begin(),candies.end());
        for(int i=0;i<n;i++){
            int diff=a-candies[i];
            if(diff<=extraCandies) res[i]=true;
        }        
        return res;
    }
};
