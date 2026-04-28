class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> strNum;
        for(int n:nums){
            strNum.push_back(to_string(n));
        }   
        sort(strNum.begin(),strNum.end(),[](const string& a, const string& b){
            return a+b>b+a;
        });
        if(strNum[0]=="0") return "0";
        string res="";
        for(string& s:strNum) res+=s;
        return res;
    }
};
