#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main()
{
	int n,m;
	vector<int> h;
	char day;
	cin>>n;
	
	cin>>m;
	cin>>day;
	
	for(int i = 0;i<m;i++)
	{
		cin>>h[i];
	}
	int y;
	unordered_map<char,int> hm;
	int p = 1;
	for(int i = 0;i<n;i++)
	{
		hm[day] = p;
		y = int (day);
		y++;
		day = y;
	}
	
	
	
}
