class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int n=skill.size();
        sort(skill.begin(),skill.end());
        int l=0;
        int r=n-1;
        int sum=skill[0]+skill[n-1];
        long long ans=0;
        while(l<r){
            if(skill[l]+skill[r]==sum){
                ans+=(skill[l]*skill[r]);
                l++;
                r--;
            }
            else{
                return -1;
                break;
            }
        }       
        return ans;
    }
};
