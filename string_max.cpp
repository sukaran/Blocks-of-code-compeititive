#include<string.h>
#include<bits/stdc++.h> 
#define ASCII_SIZE 256 
using namespace std; 

int main() 
{ 
	string str; 
	cin>>str;
	
	int count[ASCII_SIZE] = {0}; 


	int len = strlen(str.c_str()); 
	int max = 0; 
	int min = 0;
	


	for (int i = 0; i < len; i++) { 
		count[str[i]]++; 
		if (max < count[str[i]]) { 
			
			max = count[str[i]]; 
			 
		} 
	} 
	
	for (int i = 0; i < len; i++) { 
		count[str[i]]++; 
		if (min > count[str[i]]) { 
			
			min = count[str[i]]; 
			 
		} 
	} 

cout<<max-min<<endl;

} 

