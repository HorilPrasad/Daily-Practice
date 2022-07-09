class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int j,k;
        
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size()-2; i++)
        {
            j=i+1;
            k=nums.size()-1;
            
            if(i>0 && nums[i] == nums[i-1])
                continue;
                
            
            while(j<k)
            {
                if(nums[i]+nums[j]+nums[k] == 0)
                {
                    ans.push_back({nums[i],nums[j],nums[k]});
                    
                    while(j<k && nums[j] == nums[j+1]) j++;
                    while(j<k && nums[k] == nums[k-1]) k--;
                    j++;
                    k--;
                    
                }else if(nums[i]+nums[j]+nums[k]>0)
                {
                    while(j<k && nums[k] == nums[k-1]) k--;
                    k--;
                    
                }else
                {
                    while(j<k && nums[j] == nums[j+1]) j++;
                    j++;
                    
                }
            }
        }
        
        return ans;
    }
};