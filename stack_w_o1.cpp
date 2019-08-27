#include<bits/stdc++.h>
using namespace std;

struct myStack{
	stack<int> s;
	int maxele;
	
	void getmax()
	{
		if(s.empty())
		{
			cout<<"Stack is empty\n";
		}
		else
		{
			cout<<"Max Elemnet is: \n";
			cout<<maxele<<endl;
		}
	}
	
	void push(int x)
	{
		if(s.empty())
		{
			s.push(x);
			maxele = x;
			cout<<"New inserted : "<<x<<endl;
			return;
		}
		if(x > maxele)
		{
			maxele = x;
			s.push(2*x - maxele);
		}
		else
		{
			s.push(x);
		}
		cout<<"New inserted : "<<x<<endl;
	}
	void pop() 
	{
		if(s.empty())
		{
			cout<<"Empty stack\n";
			return;
		}
		int t = s.top();
		s.pop();
		cout<<"Popped Element: "<<endl;
		if(t > maxele)
		{
			maxele = 2*maxele -t;
			cout<<maxele<<endl;
		}
		else
		{
			cout<<t<<endl;
		}
	}
};

int main()
{
	myStack s;
  s.push(3); 
    s.push(5); 
    s.getmax(); 
    s.push(7); 
    s.push(19); 
    s.getmax(); 
    s.pop(); 
    s.getmax(); 
    s.pop(); 
    //s.peek(); 
}
