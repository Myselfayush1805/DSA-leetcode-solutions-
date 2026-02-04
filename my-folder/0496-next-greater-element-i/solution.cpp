class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        stack<int> st;
        vector<int> ans;
        for(int j=nums2.size()-1;j>=0;j--){
            while(!st.empty() && nums2[j]>st.top()){
                st.pop();
            }
            mp[nums2[j]]=st.empty()? -1:st.top();
            st.push(nums2[j]);
        }       
        for(int y:nums1){
            ans.push_back(mp[y]);           
        }
        return ans;
    }
};
