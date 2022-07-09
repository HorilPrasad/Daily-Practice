class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s="";
        
        for(int i=0; i<strs[0].size(); i++)
        {
            char ch = strs[0][i];
            for(auto a:strs)
            {
                if(a[i] != ch)
                    return s;
                    
            }
            s.push_back(ch);
                
                
        }
        
        return s;
    }
};