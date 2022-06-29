// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
    long long minTime(long long a[], long long b[], long long n)
    {
        // Your code goes here
        long long A=0,B=0;
        
        for(long long i=0; i<n; i++)
        {
            if(i%2==0)
            {
                A+=a[i];
                B+=b[i];
            }else
            {
                A+=b[i];
                B+=a[i];
            }
        }
        if(A>B)
        return B;
        else
        return A;
    }
};

// { Driver Code Starts.
int main() {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin >> n;
        long long a[n], b[n];
        for(long long i=0;i<n;i++)
            cin >> a[i];
        for(long long i=0;i<n;i++)
            cin >> b[i];
        Solution ob;
        cout << ob.minTime(a, b, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends