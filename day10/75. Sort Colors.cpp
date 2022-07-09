class Solution {
public:
    void sortColors(vector<int>& nums) {
        int one=0;
        int two=0;
        int zero =0;
        
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] == 0)
                zero++;
            else if(nums[i] == 1)\
                one++;
            else
                two++;
        }
        nums.clear();
        while(zero--)
            nums.push_back(0);
        while(one--)
            nums.push_back(1);
        while(two--)
            nums.push_back(2);
        
        
    }
};