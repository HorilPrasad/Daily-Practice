class Solution {
public:
    int tribonacci(int n) {
        if(n==0 || n== 1)
            return n;
        
        if(n ==2 )
            return 1;
        
        long long a=0,b=1,c=1;
        
        long long next;
        int i=3;
        while(i<=n)
        {
            next = a+b+c;
            a=b;
            b=c;
            c=next;
            i++;
        }
        
        return next;
    }
};