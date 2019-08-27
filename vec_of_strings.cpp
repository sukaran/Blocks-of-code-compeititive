#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<string> v;
	v.push_back("Red");
	v.push_back("Blue");
	v.push_back("Green");
	v.push_back("Violet");
	
	for(vector<int>::iterator it = v.begin();it!=v.end();it++
	{
		cout<<*it<<" ";
	}
}
