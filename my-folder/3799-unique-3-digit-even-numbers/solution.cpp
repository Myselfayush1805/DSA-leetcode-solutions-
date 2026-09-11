class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        unordered_set<int> s;
        for(int i=0;i<digits.size();i++){
            if(digits[i]==0) continue;
            for(int j=0;j<digits.size();j++){
                for(int k=0;k<digits.size();k++){
                    if(i==j || i==k || j==k) continue;
                    if(digits[k]%2!=0) continue;
                    s.insert(digits[k]+digits[j]*10+digits[i]*100);
                }
            }
        }       
        return s.size();
    }
};
