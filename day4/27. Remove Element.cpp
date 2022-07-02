class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size = nums.size();
        vector<int> t;
        for(int i=0; i<size; i++)
        {
            if(nums[i] != val)
            {
                t.push_back(nums[i]);
            }
        }
        nums.clear();
        nums=t;
        return nums.size();
    }
};