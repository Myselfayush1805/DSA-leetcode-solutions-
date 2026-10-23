class Solution {
public:
    int longestBalanced(string s) {
        int i=0;
        int maxLen=0;
        while(i<s.size()){
            unordered_map<char,int> mp;
            for(int j=i;j<s.size();j++){
                mp[s[j]]++;
                bool isValid=true;
                int firstVal=mp.begin()->second;
                for(auto&[key,value]:mp){
                    if(value!=firstVal){
                        isValid=false;
                        break;
                    }
                }
                if(isValid) maxLen=max(maxLen,j-i+1);
            }       
            i++;
        }
        return maxLen;
    }
};
