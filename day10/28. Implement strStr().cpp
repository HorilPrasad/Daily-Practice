class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0;
        int j=0;
        int l = needle.size();
        while(i<haystack.size())
        {
            int t=i;
            int count =0;
            if(haystack[t] == needle[j])
            {
                count=;
                t++;
                j++;
                while(j<l && t<haystack.size() && haystack[t] == needle[j])
                {
                    t++;
                    j++;
                    count++;
                }
            }
            
            if(count == l)
                return i;
           
            i++;
            j=0;
                
        }
        return -1;
    }
};