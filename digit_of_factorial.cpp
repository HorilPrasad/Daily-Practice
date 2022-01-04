#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;

    float result=0.0;

    cin>>n;

    long long t=1;

    while(t<=n)
    {
        result+=log10(t);
        t++;
    }
    cout<<floor(result+1);
    return 0;
}