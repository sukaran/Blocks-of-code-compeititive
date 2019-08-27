#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		unsigned long long int n,k;
		cin>>n>>k;
		unsigned long long int a[k]={0},b[k]={0};
		unsigned long long int p = n/k;
		
			for(int j = 0;j<k;j++)
			{
		 		a[j]+=p;			
			}
	
		
		
		//sort(b,b+k);
		for(int i = 0;i<p;i++)
		{
			sort(b,b+k);
			b[0] +=k;
		}
		int f = 0;
		for(int i = 0;i<k;i++)
		{
			//cout<<a[i]<<"   "<<b[i]<<endl;
		//}
			if(a[i]!=b[i])
			{
				f= 1;
				break;
			}
		}
		if(f ==1)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
		
		
			
	}
	
	
	
	
	
}
