class Solution {
public:
    string smallestPalindrome(string s) {
        map<char,int> mp;
        for(char c:s) mp[c]++;      
        string first="";
        string middle="";
        for(auto& [ch,freq]:mp){
            first.append(freq/2,ch);
            if(freq%2!=0) middle=ch;
        }
        string second=first;
        reverse(second.begin(),second.end());
        return first+middle+second;
    }
};
