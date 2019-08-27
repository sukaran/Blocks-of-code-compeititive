#include<bits/stdc++.h> 
#include<string.h>
using namespace std; 
typedef long long int ll; 


ll gcd(ll a, ll b) 
{ 
	if (!a) 
	return b; 
	return gcd(b%a,a); 
} 


ll reduceB(ll a, string b) 
{ 
 
	ll mod = 0; 


	for (int i=0; i<strlen(b.c_str()); i++) 
		mod = (mod*10 + b[i] - '0')%a; 

	return mod;  
} 

ll gcdLarge(ll a, string b) 
{ 
	
	ll num = reduceB(a, b); 

	
	return gcd(a, num); 
} 


int main() 
{ 
	 
	ll a;
	cin>>a;

	string b;
	cin>>b;


	cout << gcdLarge(a, b); 

	return 0; 
} 

