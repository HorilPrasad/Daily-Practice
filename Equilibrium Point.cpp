// { Driver Code Starts
#include <iostream>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        long long prefixsum[n];
        
        if(n<=2)
          if(n==1)
           return n;
           
           if(n==2)
             return -1;
        else
        {
            for(int i=0;i<n;i++)
            {
                if(i==0)
                  prefixsum[i]=a[i];
                else
                  prefixsum[i]=prefixsum[i-1]+a[i];
            }
            
            for(int i=0;i<n;i++)
            {
                if(prefixsum[i]==prefixsum[n-1]-prefixsum[i-1])
                   return i+1;
            }
        }
        
        return -1;
    }

};

// { Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends