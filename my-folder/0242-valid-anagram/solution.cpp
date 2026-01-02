class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> count;
        if(s.size()!=t.size()){
            return false;
        }
        for(char c:s){
            count [c]++;
        }
        for(char c:t){
            count [c]--;  
        }
        for(auto a:count){
            if(a.second!=0){
               return false;
            }
        }
        return true;
    }
};
