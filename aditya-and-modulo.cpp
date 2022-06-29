#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int arr[n];
        int rem[n];
        int unique=0;
        int x=n;
        
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            rem[i]=arr[i]%m;
            
        }
        for(int i=0;i<n-1;i++)
        {

            for(int j=i+1; j<n; j++)
            {
                if(rem[i]==rem[j])
                {
                    unique++;
                    for(int k=j; k<n-1;k++)
                        rem[k]=rem[k+1];
                    n--;
                    j--;
                } 
            }
            
        }
        cout<<n<<endl;
        cout<<x-(unique*2)<<endl;
    }
    return 0;
}