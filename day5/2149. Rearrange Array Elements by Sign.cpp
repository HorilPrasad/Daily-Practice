class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
         vector<int>p;
        vector<int>n;
        vector<int>ans;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]<0)
                n.push_back(nums[i]);
            else
                p.push_back(nums[i]);
            
            
        }
      
        int j=0;
        int k=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(i%2==0)
                ans.push_back(p[j++]);
            else
                ans.push_back(n[k++]);
        }
        
        return ans;
    }
};