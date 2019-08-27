#include<iostream>
#include<cmath>
using namespace std;

int sumq(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return (pow(n,n)+sumq(n-1)); 
	}
}

int main()
{
	int n;
	cin>>n;
	cout<<sumq(n);
}
