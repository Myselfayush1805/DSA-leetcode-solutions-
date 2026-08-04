class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return{};
        vector<string> res;
        string s="";
        backtrack(0,s,digits,res);
        return res;
    }
private:
    void backtrack(int i, string& s, string& digits, vector<string>& res) {
        vector<string> key={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        if(i==digits.size()){
            res.push_back(s);
            return;
        }
        char curr=digits[i];
        int idx=curr-'0';
        string letters=key[idx];       
        for(char c:letters){
            s.push_back(c);
            backtrack(i+1,s,digits,res);
            s.pop_back();
        }
    }
};
