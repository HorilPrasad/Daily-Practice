class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int j=-1;
        
        for(int i=0; i<nums.size(); i++)
        {
            if(j!=-1 && nums[i] == 1)
            {
                if(i-j-1<k)
                    return false;
            }
            
            if(nums[i] == 1)
                j=i;
        }
        
        return true;
    }
};