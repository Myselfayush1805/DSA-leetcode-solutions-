class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int> freq;
        vector<int> arr1;
        vector<int> arr2;
        for(auto& m:matches){
            int win=m[0];
            int lose=m[1];
            if(freq.find(win)==freq.end()) freq[win]=0;
            freq[lose]++;
        }
        for(auto& [key,value]:freq){
            if(value==0) arr1.push_back(key);
            else if(value==1) arr2.push_back(key);
        }
        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end());
        return {arr1,arr2};
    }
};
