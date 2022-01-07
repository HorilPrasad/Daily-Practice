class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        int r = n-1;
        
        int mid;
        
        while(l<=r)
        {
            mid = l + (r-l)/2;
            if((mid==0||nums[mid-1]<=nums[mid]) && (mid == n-1||nums[mid+1]<=nums[mid]))
              break;
            
            if(mid>0 && nums[mid-1]>nums[mid])
             r = mid-1;
            else
             l = mid+1;
        }
        
        return mid;
    }
};