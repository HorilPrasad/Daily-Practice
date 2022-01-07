class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        else
        {
            int t=x;
            int rem;
            long int reverse=0;
            while(t>0)
            {
                rem=t%10;
                reverse=(reverse*10)+rem;
                t/=10;
            }
            if(x==reverse)
                return true;
            else
                return false;
        }
    }
};