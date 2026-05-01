class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()) return false;
        vector<int> map1(26,0);
        vector<int> map2(26,0);
        int k=s1.size();
        for(int i=0;i<k;i++){
            map1[s1[i]-'a']++;
            map2[s2[i]-'a']++;
        }
        if(map1==map2) return true;
        for(int i=k;i<s2.size();i++){
            char right=s2[i];
            char left=s2[i-k];
            map2[right-'a']++;
            map2[left-'a']--;
            if(map1==map2) return true;
        }        
        return false;
    }
};
