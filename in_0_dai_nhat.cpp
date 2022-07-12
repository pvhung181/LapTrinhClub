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
    ll a[n];
    for(int i=0;i<n;i++)
       cin>>a[i];
    ll dem=0;
    ll max=dem;
    ll i=0; 
    for(int i=0;i<n;i++)
    {
    	if(a[i]!=0) {
    		if(max<dem)
    		  max=dem;
    		dem=0;
    		  continue;
		}
    	dem++;
    	if(i==n-1&& a[i]==0)
    	{
    		if(max<dem)
    		   max=dem;
		}
	}
	cout<<max;
}


