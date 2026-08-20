class Solution {
public:
    int distributeCookies(vector<int>& cookies, int k) {
        vector<int> check(k,0);
        int ans=INT_MAX;
        backtrack(check,0,cookies,k,ans);
        return ans;        
    }
private:
    void backtrack(vector<int>& check, int idx, vector<int>& cookies, int k, int& ans) {
        if(idx==cookies.size()){
            ans=min(ans,*max_element(check.begin(),check.end()));
            return;
        }
        for(int i=0;i<k;i++){
            check[i]+=cookies[idx];
            backtrack(check,idx+1,cookies,k,ans);
            check[i]-=cookies[idx];
        }
    }
};
