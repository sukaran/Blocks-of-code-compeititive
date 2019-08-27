
#include<bits/stdc++.h>

using namespace std;

int max(int a,int b)
{
	return (a>b)?a:b;
}
int lcs(char* x,char* y,int m,int n)
{
	int l[m+1][n+1];
	int result = 0;
	for(int i = 0;i<=m;i++)
	{
		for(int j = 0;j<=n;j++)
		{
			if(i==0 || j == 0)
			{
				l[i][j] = 0;
			}
			else if(x[i-1]==y[j-1])
			{
				 l[i][j] = l[i-1][j-1]+ 1;
				 result = max(result,l[i][j]);
			}
			else
			{
				l[i][j] =  0;
			}
		}
	}	
	return result;
}
int main()
{
	char a[]= "aabbabba";
	char b[] = "aabb";
	int m = strlen(a);
	int  n= strlen(b);
	cout<<lcs(a,b,m,n);
	return 0;
	
}
