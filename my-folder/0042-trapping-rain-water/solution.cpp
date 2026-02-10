class Solution {
public:
    int trap(vector<int>& height) {
        int sum=0;
        int n=height.size();
        vector<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && height[st.back()]<height[i]){
                int bottom=st.back();
                st.pop_back();
                if(st.empty()){
                    break;
                }
                int left=st.back();
                int width=i-left-1;
                int boundedHeight=min(height[left],height[i])-height[bottom];
                sum+=boundedHeight*width;
            }
            st.push_back(i);
        }    
        return sum;   
    }
};
