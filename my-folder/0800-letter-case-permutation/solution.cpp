class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        vector<string> res;
        string temp="";
        backtrack(0,temp,res,s);
        return res;        
    }
private:
    void backtrack(int i, string& temp, vector<string>& res, string& s) {
        if(s.size()==temp.size()){
            res.push_back(temp);
            return;
        }
        if(isdigit(s[i])){
            temp.push_back(s[i]);
            backtrack(i+1,temp,res,s);
            temp.pop_back();
        }
        else{
            temp.push_back(toupper(s[i]));
            backtrack(i+1,temp,res,s);
            temp.pop_back();
            temp.push_back(tolower(s[i]));
            backtrack(i+1,temp,res,s);
            temp.pop_back();
        }
    }
};
