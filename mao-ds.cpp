#include<iostream>
#include<map>
using namespace std;

int main()
{
	map<int,int> m;
	m[1] = 4;
	m[2] = 3;
	m[3] = 2;
	m[4] = 1;
	for(int i = 0;i<m.size();i++)
	{
		cout<<i<<"  "<<m[i]<<endl;
	}
	//cout<<m.count(4)<<endl;
}
