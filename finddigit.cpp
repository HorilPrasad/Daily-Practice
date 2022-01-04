#include <bits/stdc++.h>
using namespace std;

/*int solve(int n)
{
    if(n/10==0)
    return 1;

    return 1+solve(n/10);
}*/

int main()
{
    int num;
    cin>>num;
    //int result=solve(num);

    int result = floor(log10(num)+1);
    cout<<result;

    return 0;
}