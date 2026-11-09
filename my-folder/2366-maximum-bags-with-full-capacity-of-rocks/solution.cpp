class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int count=0;
        vector<int> diff;
        for(int i=0;i<rocks.size();i++){
            diff.push_back(capacity[i]-rocks[i]);
        }        
        sort(diff.begin(),diff.end());
        for(int n:diff){
            if(n<=additionalRocks){
                count++;
                additionalRocks-=n;
            }
            if(additionalRocks==0) break;
        }
        return count;
    }
};
