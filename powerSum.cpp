#include<bits/stdc++.h>
using namespace std;

int util(int x,int n,int i)
{
	int val = x- pow(i,n);
	if(val==0)
	{
		return 1;
		
		}
		else if(val<0)
		{
			return 0;
			
			}
		else
		{
			return util(x,n,i+1)+util(val,n,i+1);
			}	
}


int main()
{
	int x;int n;
	cin>>x>>n;
	int j = util(x,n,1);	
	cout<<j<<endl;
}
