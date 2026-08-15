class Solution {
public:
    string longestSubsequenceRepeatedK(string s, int k) {
        string res="";
        string temp="";
        string chars="";
        unordered_map<char,int> freq;
        for(char c:s) freq[c]++;
        for(const auto& [key,value]:freq){
            if(value>=k) chars.push_back(key);
        }
        backtrack(res,temp,freq,chars,s,k);
        return res;
    }
private:
    void backtrack(string& res, string& temp, unordered_map<char,int>& freq, string& chars, string& s, int& k) {
        if(!isValid(s,temp,k)) return;
        if(temp.size()>res.size()) res=temp;
        else if(temp.size()==res.size() && temp>res) res=temp;
        for(char c:chars){
            temp.push_back(c);
            backtrack(res,temp,freq,chars,s,k);
            temp.pop_back();
        }
    }
    bool isValid(string& s, string& temp, int k) {
        if(temp.empty()) return true;
        int i=0;
        int count=0;
        for(int j=0;j<s.size();j++){
            if(temp[i]==s[j]){
                i++;
                if(i==temp.size()){
                    count++;
                    i=0;
                    if(count==k) return true;
                }
            }
        }
        return count>=k;
    }
};
