#include<iostream>
using namespace std;


int main()
{
	long int t;
	cin>>t;
	while(t--)
	{
		long long int a,b,p,q;
		cin>>a>>b>>p>>q;
		if(a==b)
		{
			if(p==q)
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}
		}
	}
}
