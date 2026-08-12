class Solution {
public:
    int partitionString(string s) {
        int count=1;
        unordered_set<char> set;   
        for(char c:s){
            if(set.count(c)){
                count++;
                set.clear();
            }
            set.insert(c);
        }    
        return count;
    }
};
