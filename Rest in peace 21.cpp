#include<bits/stdc++.h>
using namespace std;

int main()
{

	int t;
	cin>>t;

	while(t--)
	{
		string n;
		cin>>n;
		int len=n.size();
		int t=stoi(n);
		if(t%21==0)
		{
			cout<<"The streak is broken!"<<endl;
		}else
		{
			bool flag = false;
			int i=0;
			while(i<len-1)
			{
				if(n[i]=='2' && n[i+1]=='1')
				{
					flag = true;
					break;
				}

				i++;
			}

			if(flag)
				cout<<"The streak is broken!"<<endl;
			else
				cout<<"The streak lives still in our heart!"<<endl;
		}
	}

	return 0;
}