class Solution {
public:
    int numTilePossibilities(string tiles) {
        unordered_map<char,int> freq;
        for(char c:tiles) freq[c]++;
        int count=0;
        backtrack(count,freq);
        return count;              
    }
private:
    void backtrack(int& count, unordered_map<char,int>& freq) {
        for(const auto& [key,value]:freq){
            if(value>0){
                count++;
                freq[key]--;
                backtrack(count,freq);
                freq[key]++;
            }
        }
    }
};
