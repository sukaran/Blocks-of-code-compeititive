#include<iostream>
#include<string.h>
#include<cmath>
//#include<unordered_map>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string b[n];
		int a[n][n];
		char c[n+1][n+1];
		
		for(int i = 1;i<=n;i++)
		{
			cin>>b[i];	
		}
	
		
		for(int i = 1;i<=n;i++)
		{
			int z = 0;
			for(int j = 1;j<=n;j++)
			{
				//c[i][j] = b[i][j];	
				a[i][j] = int(b[i][z])-48;
				z++;
			}
			
		}
		/*
		for(int i = 1;i<=n;i++)
		{
			for(int j = 1;j<=n;j++)
			cout<<a[i][j]<<" ";
			
			cout<<endl;
		}*/
		//unordered_map<int,int> hm;
		int sum[n+1] = {0};int sum2[n+1] = {0};
		for(int i = 1;i<=n;i++)
		{
			
			for(int j = 1;j<=n/2;j++)
			{
				sum[i]+=a[i][j];
			}
			for(int r = n/2+1;r<=n;r++)
			{
				sum2[i]+=a[i][r];
			}
		}
		int sum3[n+1] = {0};
		int sux1=0,sux2=0;
		int max1 = 0;int max2 = 0;
		for(int i = 1;i<=n;i++)
		{
			if(max < sum[i])
				max = sum[i];
			sux1 += sum[i];
			sux2 += sum2[i];
		}
		int sux3 = 0;
		for(int i = 1;i<=n;i++)
		{
			
			sux3 += abs(sux1 - sux2);
			
		}
		cout<<sux3<<endl;
	}
}
