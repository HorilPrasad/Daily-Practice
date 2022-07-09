class Solution {
public:
    int myAtoi(string s) {
        int sign = 1;
        
        int result =0;
        
        int i=0;
        int n = s.size();
        
        while(i<n && s[i] == ' ')
       i++
        
        if(s[i] == '+')
        {
            i++;
        }else if(s[i] == '-')
        {
            sign =-1;
            i++;
        }
        
        while(isdigit(s[i]))
        {
            int digit  = s[i]-'0';
            
            if(result >INT_MAX/10  || (result == INT_MAX/10 && digit >7))
                return sign==1?INT_MAX:INT_MIN;
            
            result = (result*10)+digit;
            i++;
        }
        
        return sign*result;
        
    }
};