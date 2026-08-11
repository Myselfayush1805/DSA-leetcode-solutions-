class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
        vector<string> res;
        string temp="";
        string part="";
        backtrack(res,s,temp,0,0);
        return res;        
    }
private:
    void backtrack(vector<string>& res, string& s, string temp, int idx, int dots) {
        if(dots==4 && idx==s.size()){
            temp.pop_back();
            res.push_back(temp);
            return;
        }
        if(dots==4) return;
        for(int i=idx;i<s.size();i++){
            string part=s.substr(idx,i-idx+1);
            if(isValid(part)) backtrack(res,s,temp+part+".",i+1,dots+1);
        }
    }
    bool isValid(string& part){
        if(part.empty() || part.size()>3) return false;
        if(part.size()>1 && part[0]=='0') return false;
        if(stoi(part)>255) return false;
        return true;
    }
};
