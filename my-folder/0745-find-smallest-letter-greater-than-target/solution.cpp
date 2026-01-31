class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        for(char n:letters){
            if(n>target){
                return n;
            }
        } 
        return letters[0];     
    }
};
