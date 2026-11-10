class Solution {
public:
    int hIndex(vector<int>& citations) {
        int j=citations.size()-1;
        for(int i=0;i<citations.size();i++){
            if(citations[i]>=j-i+1) return j-i+1;
        }        
        return 0;
    }
};
