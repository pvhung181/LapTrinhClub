#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const double PI  =3.141592653589793238463;
const ll  M=1e9+7;

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll n; cin >> n;
    ll a[n];
    for(ll &t:a) cin >> t;
    sort(a,a + n);
    ll min = a[0], max = a[n-1];
    if(min == 0)
	{
		cout << 0;
		return 0;
	}
	else if(min < 0)
	{
		if(max > 0)
		  cout<< min*max;
		else
		  cout<<max*a[n-2];
	}
	else
	{
		cout << a[1]*min;
	}
	
}


