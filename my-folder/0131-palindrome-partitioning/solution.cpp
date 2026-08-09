class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> temp;
        backtrack(temp,res,s,0);
        return res;        
    }
private:
    void backtrack(vector<string>& temp, vector<vector<string>>& res, string& s, int idx) {
        if(idx==s.size()){
            res.push_back(temp);
            return;
        }
        for(int i=idx;i<s.size();i++){
            if(isPalindrome(s,idx,i)){
                temp.push_back(s.substr(idx,i-idx+1));
                backtrack(temp,res,s,i+1);
                temp.pop_back();
            }
        }
    }
    bool isPalindrome(string& s, int l, int r) {
        while(l<r){
            if(s[l]!=s[r]) return false;
            l++;
            r--;
        }
        return true;
    }
};
