#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
	int t;
	
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		
		int a[n],b[n];
		
		for(int i =0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i =0;i<n;i++)
		{
			cin>>b[i];
		}
		int c[n];
		for(int i  =0;i<n;i++)
		{
			c[i] = (a[i] * 20 )- (b[i] * 10)	;
			if(c[i] < 0)
			{
				c[i] = 0;
			}
		}
		
		sort(c,c+n);
		cout<<c[n-1]<<endl;		
	}
}
