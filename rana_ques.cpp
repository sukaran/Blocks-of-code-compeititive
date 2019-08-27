#include<iostream>
using namespace std;

int main()
{
	static int i = 1;
	if(i>11)
		return 0;
	
	cout<<i<<endl;
	i++;
	main();
}
