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
	ll a[n],b[n+5];
	for(int i=0;i<n;i++)
	  cin>>a[i];
	ll k,x; cin>>k>>x;
	for(int i=0;i<k;i++)
	  b[i]=a[i];
	b[k]=x;
	for(int i=k;i<n;i++)
	   b[i+1]=a[i];
	for(int i=0;i<=n;i++)
	   cout<<b[i]<<' ';
}


