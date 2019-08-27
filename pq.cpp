#include<bits/stdc++.h>
using namespace std;

int main()
{
	priority_queue<int,vector<int>,greater<int> > pq;
	pq.push(8);
	pq.push(1);
	pq.push(10);
	pq.push(5);
	pq.push(3);
	pq.push(18);
	
	
	while(!pq.empty())
	{
		cout<<pq.top()<< " ";pq.pop();
	}
	
}

