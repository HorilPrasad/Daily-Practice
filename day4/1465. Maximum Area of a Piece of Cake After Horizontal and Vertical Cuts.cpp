class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        int max_h = INT_MIN;
        int max_w =INT_MIN;
        
        long long mod =1e9+7;
        int m = horizontalCuts.size();
        int n = verticalCuts.size();
        int i=1;
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        
        
        max_h = horizontalCuts[i-1];
        for(i=1; i<m; i++)
        {
            max_h = max(max_h,abs(horizontalCuts[i]-horizontalCuts[i-1]));
        }
        
        max_h = max(max_h,abs(horizontalCuts[i-1]-h));
        i=1;
    
        max_w = verticalCuts[i-1];
        for(i=1; i<n; i++)
        {
            max_w = max(max_w,abs(verticalCuts[i]-verticalCuts[i-1]));
        
        }
        
        max_w = max(max_w,abs(verticalCuts[i-1]-w));
      
        
        return (max_h%mod*max_w%mod)%mod;
    }
};