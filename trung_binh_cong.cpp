#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const double PI  =3.141592653589793238463;
const ll  M=1e9+7;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n; cin>>n;
    if(n==0)
      cout<<0<<' '<<0;
    else
    {
    	ll a[n];
    	ll sum=0,dem=0;
    	for(int i=0;i<n;i++)
    	{
    		cin>>a[i];
    		sum=sum+a[i];
		}
		sum=sum/n;
		cout<<sum<<' ';
		for(int i=0;i<n;i++)
		  if(a[i]<sum)
		    dem++;
		cout<<dem;
	}
}


