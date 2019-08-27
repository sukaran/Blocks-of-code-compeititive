#include<iostream>
typedef long long int ll;
using namespace std;
int main()
{
       int t;
       cin>>t;
       while(t--)
       {
              ll i,n,x,j;
              cin>>n>>x;
              ll a[n],sum=0;
              for(i=0;i<n;i++)
              {
                     cin>>a[i];
              }
              j = 0;
              for(i=0;i<n;i++)
              {
                     if(sum + a[i] <= x)
                     {
                           sum = sum + a[i];
                     }
                     else
                     {
                           sum = sum - a[j];
                           j++;
                           i--;
                     }
                     if(sum==x)
                     {
                           cout<<"YES"<<endl;
                           i=n;
                     }
              }
              if(i==n)
              {
                     cout<<"NO"<<endl;
              }
       }
       return 0;
}

