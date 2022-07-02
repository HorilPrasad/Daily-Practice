class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        
        int val = n*(n+1)/2;
        int sum=0;
        for(auto a:nums)
            sum+=a;
        return val-sum;
    }
};

//second method
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        
        vector<int> v(n+1,0);
        
        for(int i=0; i<n; i++)
        {
            v[nums[i]]++;
        }
        for(int i=0; i<=n; i++)
        {
            if(v[i] == 0)
                return i;
        }
        
        return 0;
    }
};