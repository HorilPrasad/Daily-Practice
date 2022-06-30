class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       vector<int>v;
        map<int,int>m;
        int n=nums.size();
        for(auto a:nums)
        {
           m[a]++;
            
        }
        
        for(auto a:m)
        {
            if(a.second>floor(n/3))
                v.push_back(a.first);
        }
        
        return v;
    }
};