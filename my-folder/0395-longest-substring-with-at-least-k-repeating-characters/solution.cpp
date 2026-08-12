class Solution {
public:
    int longestSubstring(string s, int k) {
        unordered_map<char,int> freq;
        for(char c:s) freq[c]++;
        if(s.size()<k) return 0;
        for(int i=0;i<s.size();i++){
            if(freq[s[i]]<k){
                string left=s.substr(0,i);
                string right=s.substr(i+1);
                return max(longestSubstring(left,k),longestSubstring(right,k));
            }
        }
        return s.size();
    }
};
