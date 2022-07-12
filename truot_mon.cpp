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
    ll n,m; cin >> n >> m;
	ll a[n]; for(ll &t:a) cin >> t;
	sort(a,a+n);
    while(m--)
    {
			ll k; cin >> k;
         	ll *d = upper_bound(a,a+n,k);
         	cout<<d-a<<endl;
	}
}


