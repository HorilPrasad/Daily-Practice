class Solution {
public:
    int findLucky(vector<int>& arr) {
      map<int,int>m;
        int ans = -1;
        for(int i=0; i<arr.size(); i++)
        {
            m[arr[i]]++;
            
        }
        
        for(auto a:m)
        if(a.first == a.second)
                ans = max(ans,a.first);
        
        return ans;
    }
};