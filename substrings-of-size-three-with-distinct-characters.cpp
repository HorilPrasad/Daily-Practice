class Solution {
public:
    int countGoodSubstrings(string s) {
        
        int n=s.size();
        int i=0,j=0;
        vector<char> sub;
        int count=0;
        
        while(j<n)
        {
            sub.push_back(s[j]);
            
            if(j-i+1==3)
            {
                if(sub[0]!=sub[1] && sub[0]!=sub[2] && sub[1]!=sub[2] )
                    count++;
                    
                    sub.erase(sub.begin());
                    i++;
                    j++;
            
            }else if(j-i+1<3)
            {
                j++;
            }
        }
        return count;
        
    }
};