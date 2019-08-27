#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> v ;
	int t ;
	cin>>t;
	while(t!=-1)
	{
		v.push_back(t);
		cin>>t;	
	}
	make_heap(v.begin(),v.end());
	
	for(int  i = 0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
	v.push_back(12);
	push_heap(v.begin(),v.end());
	for(int  i = 0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}	
	cout<<endl;
	pop_heap(v.begin(),v.end());
	v.pop_back();
	for(int  i = 0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	sort_heap(v.begin(),v.end());
	cout<<endl<< " Sorted";
	for(int i = 0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	
	//is_heap(v.begin(),v.end()) ? cout<<"yes, bitchess!!":
	cout<<"Neah, NO";
	cout<<endl;
	
	vector<int>::iterator it;
//	vector<int>::iterator it1 = is_heap_until(v.begin(),v.end());
}
