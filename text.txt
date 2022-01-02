#include <iostream>
using namespace std;

int main() {
	int N;
	cin>>N;
	
	while(N-->0)
	{
	    int n,k;
	    cin>>n>>k;
	    string before="";
	    int arr[n];
	    int j=0;
	    for(int i=0; i<n ;i++)
	    {
	       
	        cin>>arr[i];
	        if(i>=k)
	        {
	            
	            cout<<arr[i]<<" ";
	        }else
	        {
	           before+=to_string(arr[i]) + " ";
	           
	        }
	        
	    }
	    cout<<before<<endl;
	}
	return 0;
}