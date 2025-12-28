class Solution {
public:
    bool validPalindrome(string s) {
        int left=0;
        int right=s.size()-1;
        auto checkPalindrome=[&](int l, int r){
            while(l<r){
                if(s[l]!=s[r]){
                    return false;
                }
                l++;
                r--;
            }
            return true;
        };
        while(left<right){
            if(s[left]==s[right]){
                left++;
                right--;
            }
            else{
                return checkPalindrome(left+1,right)||checkPalindrome(left,right-1);
            }
        }   
        return true;  
    }
};
