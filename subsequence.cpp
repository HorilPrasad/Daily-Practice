#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin>>n;
    while(n--)
    {
        string s,t;
        cin>>s>>t;
        
        int i=0,j=0;
        
        while(j<t.size())
        {
            if(i==s.size()-1)
                break;
            
            if(s[i]==t[j])
            {
                i++;
                j++;
            }else
            {
                j++;
            }
        }
        
        if(i==(s.size()-1))
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
