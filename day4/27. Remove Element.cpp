class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size = nums.size();
        int count =0;
        vector<int> t;
        for(int i=0; i<size; i++)
        {
            if(nums[i] != val)
            {
                count++;
                t.push_back(nums[i]);
            }
        }
        nums.clear();
        nums=t;
        return count;
    }
};