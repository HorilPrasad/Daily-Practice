class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        
        if(n == 3)
        {
            return nums[0]*nums[1]*nums[2];
        }
        
        sort(nums.begin(),nums.end(),greater<int>());
        
        
        int t= nums[0]*nums[1]*nums[2];
        int p = nums[0]*nums[n-2]*nums[n-1];
            
            
        return t>p?t:p;
    }
};