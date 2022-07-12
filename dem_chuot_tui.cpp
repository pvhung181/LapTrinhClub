#include<bits/stdc++.h>

#define endl "\n"
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const double PI  = 3.141592653589793238463;
const ll  mod = 1e9+7;

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll n; cin >> n;
	ll a[n];
	ll s = n;
	vector<ll> v;
	for(ll &x:a) cin >> x;
	sort(a,a+n);
	for(ll &x:a) v.push_back(x);
	ll k = n - 2;
	while(k >= 0)
	{
		ll x = v.back();
		ll y = *(v.begin() + k);
		if(x / y >= 2)
		{
			v.pop_back();
			v.erase(v.begin() + k);
			k = v.size() - 2;
			s--;
		}
		else k--;
	}
	cout << s; 
}


