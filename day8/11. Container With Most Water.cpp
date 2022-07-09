class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int mx=0;
        while(i<j)
        {
            mx=max(mx,(j-i)*min(height[i],height[j]));
            if(height[i]<height[j])
                i++;
            else
                j--;
        }
        
        return mx;
    }
};