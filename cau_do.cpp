#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
    	ll n ;cin>>n;
    	ll a[n];
    	ll res = 0;
		ll s = 0;
    	for(int i=0;i<n;i++)
    	   {
    	   	cin>>a[i];
    	   	res = max(res , a[i]);
    	   	s= s + a[i];
		   }
    	if(s % 2 == 0 && res <= s / 2 )
    	   cout<<"YES"<<endl;
    	else
    	  cout<<"NO"<<endl;
	}
}
