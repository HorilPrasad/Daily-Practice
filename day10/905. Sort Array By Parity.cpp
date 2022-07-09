class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i=0;
        while(i<nums.size() && nums[i]%2==0)
            i++;
        int j=i+1;
        
        while(i<nums.size() && j<nums.size())
        {
            if(nums[j]%2==0)
            {
                swap(nums[i],nums[j]);
                i++;
                j++;
            }
            else
                j++;
                
        }
        
        return nums;
    }
};