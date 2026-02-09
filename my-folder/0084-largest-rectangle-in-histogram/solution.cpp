class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>st;
        int maxArea=0;
        for(int i=0;i<=heights.size();i++){
            int currHeight=(i==heights.size()? 0:heights[i]);
            while(!st.empty() && heights[st.top()]>currHeight){
                int h=heights[st.top()];
                st.pop();
                int leftIndex=st.empty()? -1:st.top();
                int width=i-leftIndex-1;
                maxArea=max(maxArea,h*width);
            }
            st.push(i);
        }        
        return maxArea;
    }
};
