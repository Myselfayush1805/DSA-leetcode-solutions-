class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans(temperatures.size(),0);
        vector<int> st;
        for(int i=0;i<temperatures.size();i++){
            while(!st.empty() && temperatures[i]>temperatures[st.back()]){
                int idx=st.back();
                st.pop_back();
                ans[idx]=i-idx;
            }
            st.push_back(i);
        }     
        return ans;
    }
};
