class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v(1005,0);
        vector<int>res;
        for(int i=0; i<nums2.size(); i++)
            v[nums2[i]] = 1;
        
        for(int i=0; i<nums1.size(); i++)
        {
            if(v[nums1[i]] == 1)
            {
               res.push_back(nums1[i]);
                v[nums1[i]] = 0;
            }
        }
        
        return res;
    }
};