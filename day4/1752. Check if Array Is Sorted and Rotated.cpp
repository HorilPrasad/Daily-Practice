class Solution {
public:
    bool check(vector<int>& nums) {
        int count =0;
        
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]>nums[(i+1)%nums.size()]) count++;
        }
        
        return count<=1;
    }
};


//second solution
class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int>v;
        v=nums;
        sort(v.begin(),v.end());
        
        int i=0;
        int j=0;
        int t;
        int p=-1;
        while(i<nums.size())
        {
             if(p!=-1 && nums[t]<nums[i] )
                 p=-1;
            
            if(p==-1 && nums[i]==v[j])
            {
                t =i;
                p=0;
            }
              
            
            i++;
        }
        i=t;
        while(j<nums.size())
        {
            
            if(nums[i]==v[j])
            {
                if(i<nums.size()-1)
                  i++;
                else
                    i=0;
                
                j++;
            }else
                return false;
        }
        
        return true;
    }
};