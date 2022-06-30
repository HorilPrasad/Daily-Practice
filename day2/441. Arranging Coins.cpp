class Solution {
public:
    int arrangeCoins(int n) {
        long long s = 0;
        long long e = n;
        long long t = 2l*n;
        long long mid = s+(e-s)/2;
        int ans = 0;
        while(s<=e)
        {
            if((mid*(mid+1)) > t)
            {
                e = mid -1;
            }else if((mid*(mid+1)) < t)
            {
                ans = mid;
                s = mid +1;
            }else if((mid*(mid+1)) == t)
            {
                ans =mid;
                break;
            }
            mid = s+(e-s)/2;
        }
        return ans;
    }
};