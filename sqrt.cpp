class Solution {
public:
    int mySqrt(int x) {
        int res;
        long long t;
        if(x==1)
        {
            return x;
        }else
        {
        for(t=0;t<x/2;t++)
        {
            long long temp=(t+1)*(t+1);
            if(t*t==x)
            {
                res=t;
                break;
            }else if(t*t<x && temp>x)
            {
                res=t;
                break;
            }
            
        }
        
        return res;
        }
    }
};