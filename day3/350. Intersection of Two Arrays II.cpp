class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>n;
        map<int,int>m;
        vector<int>v;
        for(int i=0; i<nums1.size(); i++)
        {
            n[nums1[i]]++;
            
        }
        for(int i=0; i<nums2.size(); i++)
        {
            m[nums2[i]]++;
            
        }
        
        for(int i=0; i<nums1.size(); i++)
        {
            if(m[nums1[i]] !=0)
            {
                 v.push_back(nums1[i]);
                m[nums1[i]]--;
            }
        }
        
        return v;
    }
};