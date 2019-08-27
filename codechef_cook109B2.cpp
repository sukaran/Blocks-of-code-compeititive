#include<iostream>
#include<set>
#include<cmath>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,k,l,r;
		cin>>n>>m>>k>>l>>r;
		long int p[n];int c[n];
		
		for(int i = 0;i<n;i++)
		{
			cin>>c[i]>>p[i];
		}
		
		
	
		set<int>times;
		for(int i = 0;i<n;i++)
		{
			int tem = c[i];
			for(int j=m;j>0;j--)
			{
				if(tem>k+1)
				{
					tem = tem-1;
				}
				else if(tem<k-1)
				{
					tem = tem+1;
				}
				else if( k-1<=tem && tem<=k+1)
				{
					tem = k;
				}
				
			
			}
				if(l<=tem && tem<=r)
				{
					times.insert(p[i]);
				}
		}
		/*
		int mn = 10;
		for(int i = 0;i<times.size();i++)
		{
			mn = min(mn,p[times[i]]);
		}*/
		if(times.empty())
		{
			cout<<"-1"<<endl;
		}	
		else
		{
			set<int>:: iterator it = times.begin();
			cout<<*it<<endl;
		}
		
	}
}  
