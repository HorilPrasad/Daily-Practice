class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int,int>m;
        
        vector<int>v;
        
        v = arr;
        
        if(arr.size()<1)
            return v;
        
        sort(v.begin(),v.end());
        int j=1;
        int i;
        for(i=1; i<v.size(); i++)
        {
            if(v[i] != v[i-1])
            {
                m[v[i-1]] =j;
                j++;
            }else
            {
                m[v[i-1]] = j;
            }
        }
        
        m[v[i-1]] = j;
        v.clear();
        for(i=0; i<arr.size(); i++)
        {
            v.push_back(m[arr[i]]);
        }
        return v;
    }
};