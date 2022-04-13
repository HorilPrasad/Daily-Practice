class Solution {
public:
    int reverse(int x) {
        long int rev = 0;
        while(x!=0){
            int rem = x%10;
            if(rev>INT_MAX/10)
                return 0;
            if(rev<INT_MIN/10)
                return 0;
            rev = (rev*10)+rem;
            
            x/=10;
        }
      
            return rev;
    }
};