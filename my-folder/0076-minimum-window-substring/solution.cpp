class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> mpT;
        unordered_map<char,int> mpS;
        int maxLen=INT_MAX;
        for(char c:t) mpT[c]++;
        int i=0;
        int start=0;
        for(int j=0;j<s.size();j++){
            mpS[s[j]]++;
            while(isValid(mpT,mpS)){
                if(maxLen>j-i+1){
                    start=i;
                    maxLen=j-i+1;
                }
                mpS[s[i]]--;
                i++;
            }              
        } 
        return (maxLen==INT_MAX) ? "":s.substr(start,maxLen);
    }     
private:
    bool isValid(unordered_map<char,int>& mpT, unordered_map<char,int>& mpS){
        for(const auto& k:mpT){
            if(mpS[k.first]<k.second) return false;
        }
        return true;
    }
};
