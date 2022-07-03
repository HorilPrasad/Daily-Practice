class Solution {
public:
    void seave(vector<bool>& prime,int n)
    {
        for (int p = 2; p * p <= n; p++) {
        
        if (prime[p] == true) {
            
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
        }
    }
    int countPrimes(int n) {
        vector<bool>prime(n+2,true);
        prime[1] = false;
        seave(prime,n+2);
        int count=0;
        for(int i=2; i<n; i++)
        {
            if(prime[i])
                count++;
        }
        
        return count;
    }
};