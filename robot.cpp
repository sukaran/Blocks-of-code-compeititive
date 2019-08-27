#include<iostream>
#include<string.h>
using namespace std;

int robot(char s[])
{
	
	int count = 0;

	if ((s[0] == 'L' && s[1] == 'U') || (s[0] == 'R' && s[1] == 'D') || (s[0] == 'L' && s[1] == 'D') || (s[0] == 'R' && s[1] == 'U'))
	{
		count+=2;
	
	robot(s+2);
}
	else if(s[0] == 'L' || s[0] == 'R'|| s[0] == 'D'|| s[0] == 'U'){
		count++;
		robot(s+1);
	}
	return count;
}
int main()
{
	char s[5];
	for(int i = 0;i<5;i++)
	{
		cin>>s[i];	
	}
	
	cout<<robot(s);
}
