#include<iostream>
#include<limits.h>
using namespace std;

int fib(int n,int t1,int t2)
{
	/*if(n==1 || n==0 )
	{
		return t1;
	}
	else if(n==2)
	{
		return t2;
	}*/
	 long double arr[n+1];
	arr[1] = t1;
	arr[2]= t2;
	for(int i = 3;i<=n;i++)
	{
			arr[i] =  arr[i-2] + arr[i-1]*arr[i-1];			
	}
	return arr[n];
}

int main()
{
	int n,t1,t2;
	cin>>t1>>t2;
	cin>>n;

				cout<<fib(n,t1,t2)<<endl;
			

	
	

}
