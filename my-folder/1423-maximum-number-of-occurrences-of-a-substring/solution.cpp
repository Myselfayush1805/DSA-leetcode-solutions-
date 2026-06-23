class Solution {
public:
    int maxFreq(string s, int maxLetters, int minSize, int maxSize) {
        unordered_map<string,int> mp;
        int count=0;
        for(int i=0;i<=(int)s.size()-minSize;i++){
            string sub=s.substr(i,minSize);
            int freq[26]={0};
            int unique=0;
            for(char c:sub){
                if(freq[c-'a']==0) unique++;
                freq[c-'a']++;
            }
            if(unique<=maxLetters){
                mp[sub]++;
                count=max(count,mp[sub]);
            }
        }       
        return count;
    }
};
