#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		 string s;
		cin>>s;
		long int n = 0 ;
		
		while(s[n]!='\0')
		{
			
			n++;
		}
		int x = 0;
		for(int i=0;i<n;i++)
		{
			if(s[i] == '0')
			{
				x++;
			}	
		}
		if(x == (n-x)*(n-x))
		{
			cout<<x<<endl;
		}
		//cout<<n-x<<" : "<<x<<endl;
		/*
		//cout<<n;
		//cout<<strlen(s.c_str())<<endl;
		
		long int p =0;
		//cout<<s;
		for(int i = 0;i<n;i++)
		{
			if((s[i] == '0' && s[(i+1)%n] == '1' ) || (s[i]=='1' && s[(i+1)%n]=='0'))
			{
				p++;
			}
			
				
		}	
		if(n==2)
		{
			cout<<p-1<<endl;
		}
		else
		{
			cout<<p<<endl;	
		}
		*/
		
	}
	 
}
