class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int m=INT_MIN;
        
       for(auto s:sentences)
       {
           int word = count(s.begin(),s.end(),' ');
           m = max(m,word+1);
       }
        
        return m;
    }
};