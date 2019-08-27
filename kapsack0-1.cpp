#include<iostream>
using namespace std;

int knapsack(int W,int wt[],int val[],int n)
{
	int k[n+1][W+1];
	for(int i = 0;i<=n;i++)
	{
		for(int w=0;w<=W;w++)
		{
			if(i==0 || w==0)
			{
				k[i][w] = 0;
			}
			else if(wt[i-1] <= w)
			{
				k[i][w] = max(val[i-1] + k[i-1][w-wt[i-1]] , k[i-1][w]);
			}
			else
			{
				k[i][w] = k[i-1][w];
			}
		}
	}
	return k[n][W];
}


int main()
{
	int val[3] = {60,100,120};
	int wt[3] = {10,20,30};
	cout<<knapsack(50,wt,val,3);
	return 0;
}
