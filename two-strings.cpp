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
		char s[n];	
		char r[n];
		int i = 0;
		while(i<n)
		{
			cin>>s[i];	i++;
		}
		i=0;
		while(i<n)
		{
			cin>>r[i];	i++;
		}
		
		int fs =0,fr = 0;
		int k =n;
		while(n--)
		{
			if(s[n] == '1')
			{
				fs++;	
			}
			
		}
		while(k--)
		{
			if(r[k] =='1' )
			{
				fr++;
			}
		}
	//	cout<<endl<<fr<<":   "<<fs<<endl;
		
		if(fr==fs)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
		
		
	}
	return 0;
	
}
