#include<iostream>
#include<vector>
using namespace std;

int swap(int *x,int *y)
{
	int temp;
	
	temp = *y;
	*y = *x;
	*x= temp;	
	
}

vector<int> bubsort(vector<int>a)
{
	for(int i = 0;i<a.size()-1;i++)
	{
		for(int j = 0;j<a.size()-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				swap(&a[j],&a[j+1]);
			}
		}
	}
	return a;
}
int main()
{
	vector<int> v ;
	int x = 0;
	for(int i = 0;i<5;i++)
	{
		cin>>x;
		v.push_back(x);
	}
	vector<int> p = bubsort(v);
	for(int i = 0;i<p.size();i++)
	{
		cout<<p[i]<<" ";
	}
}
