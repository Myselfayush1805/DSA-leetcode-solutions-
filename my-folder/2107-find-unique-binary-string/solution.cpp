class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        unordered_set<string> st(nums.begin(),nums.end());
        string temp="";
        string res="";
        backtrack(temp,res,st,nums);
        return res;       
    }
private:
    void backtrack(string& temp, string& res, unordered_set<string>& st, vector<string>& nums) {
        if(temp.size()==nums.size()){
            if(st.find(temp)==st.end()) res=temp;
            return;
        }
        temp.push_back('0');
        backtrack(temp,res,st,nums);
        temp.pop_back();
        temp.push_back('1');
        backtrack(temp,res,st,nums);
        temp.pop_back();
    }
};
