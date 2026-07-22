class Solution {
public:
    int maxArea(vector<int>& heights) {
        int area=INT_MIN;
        int l=0,r=heights.size()-1;
        while(l<r){
            int h=min(heights[l],heights[r]);
            int b=r-l;
            int a=h*b;
            area=max(a,area);
            if (heights[l] <= heights[r]) {
                l++;
            } else {
                r--;
            }
        }return area;
    }
};
