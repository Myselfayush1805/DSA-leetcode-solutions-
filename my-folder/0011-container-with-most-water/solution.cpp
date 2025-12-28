class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int maxArea=0;
        while(l<r){
            int Area=min(height[l],height[r])*(r-l);
            maxArea=max(maxArea,Area);
            if(height[l]<height[r]){
                l++;
            }
            else if(height[l]>height[r]){
            r--;
            }
            else{
                l++;
            }
       }
       return maxArea;
    }
};
