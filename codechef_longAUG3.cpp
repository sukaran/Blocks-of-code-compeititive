#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long int c[n],h[n],r[n+1]={0};
		
		for(int i = 1;i<=n;i++)
		{
			cin>>c[i];
		}
		
		for(int i = 1;i<=n;i++)
		{
			cin>>h[i];
		}
		
		for(int i = 1;i<=n;i++)
		{
			long int x = i-c[i];
			if(x<=0)
			{
				x = 1;
			}
			long int k = i+c[i];
			if(k>n)
			{
				k = n;
			}
			for(int j = x;j<=k;j++)
			{
				r[j]+=1;
			}
		}
	
		int f = 0;
		for(int y = 1;y<=n;y++)
		{
			for(int j = 1;j<=n;j++)
			{
				if(r[j]==h[y])	
				{
					h[y]=-1;
					r[j] = -2;
				}
				
			}
	}
		
		for(int i=1;i<=n;i++)
		{
			if(h[i]!=-1)
			{
				f=1;
				break;
			}
		}
		if(f==1)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
		}
	}
}
