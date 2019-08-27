#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<set>
#include<unordered_map>
//#include<ordered_map>
using namespace std;

	int main()
		{
				set<char>s;
				char x ;
				for(int i = 0;i<5;i++)
				{
					cin>>x;
					s.insert(x);
				}
				unordered_map<int,int>hm;
				
				int j = 8;
				for(int i = 0;i<5;i++)
				{
					hm[i] = j++;
				}
					
				//set<int>::iterator it;
				for(set<char>::iterator it = s.begin();it!=s.end();it++)
				{
					cout<<*it;
				}
				
				/*
				
		*/
	
		}

