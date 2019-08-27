
#include <bits/stdc++.h> 
using namespace std; 


int* ans = NULL; 



void countSieve(int arr[], int n) 
{ 
	int MAX = *max_element(arr, arr + n); 

	int cnt[MAX + 1]; 

	ans = new int[MAX + 1]; 

 
	memset(cnt, 0, sizeof(cnt)); 
	memset(ans, 0, (MAX + 1) * sizeof(int)); 


	for (int i = 0; i < n; ++i) 
		++cnt[arr[i]]; 

 
	for (int i = 1; i <= MAX; ++i) 
		for (int j = i; j <= MAX; j += i) 
			ans[i] += cnt[j]; 
	return; 
} 

int countMultiples(int k) 
{ 

	return ans[k]; 
} 

 
int main() 
{ 
	int n ;
	cin>>n;
	int arr[n];
	for(int i = 0;i<n;i++)
	{
		cin>>arr[i];
	}
	int q;
	cin>>q;
	int k[q];
	for(int i = 0;i<q;i++)
	{
		cin>>k[i];
	}
	countSieve(arr, n); 
	for(int i = 0;i<q;i++)
	{
	
		cout << countMultiples(k[i]) << "\n"; 
	}
	return 0; 
} 

