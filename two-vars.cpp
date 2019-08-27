#include<iostream>
using namespace std;

int main()
{
	long int t;
	cin>>t;
	
	while(t--)
	{
		long int xf;
		cin>>xf;
		long int w =-1;
		long int x = 0,y=0;
		int po;
		for(int p = 1 ;x <= xf;p++)
		{	
			po = p;
			if(p*p > y)
			{
			//	cout<<" x is :"<<x<<" y is :"<<y<<endl;
				w++;
				x = p;
				y = y + p*p;
			}
			
		}
		//cout<<endl;
		cout<<w<<endl;
	}
}
