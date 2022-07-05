class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>s;
        
        if(nums.size()<1)
            return 0;
        for(int i=0; i<nums.size(); i++)
        {
            s.insert(nums[i]);
        }
        
        int count=1;
        int mx=-0;
        
        set<int>::iterator it = s.begin();
        
        int temp = *it;
        
        for(++it; it !=s.end(); it++)
        {
            if(*it==++temp)
            {
                count++;
                
            }
            else
            {
                mx = max(mx,count);
                count =1;
                temp=*it;
                
            }
        }
        mx = max(mx,count);
        return mx;
    }
};