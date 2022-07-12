#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const double PI  = 3.141592653589793238463;
const ll  mod = 1e9+7;

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
    	ll n ;cin>>n;
    	ll a[n];
    	if(n==1)
        {
        	cout<<"NO"<<endl;
        	continue;
		}
		ll s = 0;
    	for(int i=0;i<n;i++)
    	   {
    	   	cin>>a[i];
    	   	s= s + a[i];
		   }
    	if(s % 2 == 0 )
    	   cout<<"YES"<<endl;
    	else
    	  cout<<"NO"<<endl;
	}
}


