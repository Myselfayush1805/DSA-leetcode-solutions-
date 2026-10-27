class Solution {
public:
    vector<string> createGrid(int m, int n) {
        string s(n,'.');
        string s1(n,'#');
        s1[n-1]='.';
        vector<string> res;
        res.push_back(s);
        for(int i=0;i<m-1;i++) res.push_back(s1);
        return res;        
    }
};
