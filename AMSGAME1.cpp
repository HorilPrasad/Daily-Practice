#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if(b==0)
    return a;

    return gcd(b,a%b);
}

int main() {
    
	int t;
	cin>>t;
	while(t-->0)
	{
	    int n,a,b;
	    cin>>n;
	    if(n==1)
	    {
	        cin>>a;
	        cout<<a<<endl;
	    }
	    if(n==2)
	    {
	        cin>>a>>b;
	        cout<<gcd(a,b)<<endl;
	    }
	    if(n>2)
	    {
	        for(int i=0; i<2; i++)  {
                   cin>>a>>b;
                   a=gcd(a, b);
                   break;
                }
             for(int i=2; i<n; i++) {
               cin>>b;
               a=gcd(a, b); 
             }
             
             cout<<a<<endl;
	    }
	    
	}
	return 0;
}
