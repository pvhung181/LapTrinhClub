#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second
#define forit(it,m) for(auto it : m)

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const ll  mod = 1e9+7;

inline ll _gcd(ll a, ll b) {ll r;while(b != 0) {r = a % b;a = b;b = r;}return a;}
inline ll _lcm(ll a, ll b) {return (a * b) / _gcd(a,b);}



int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll n, m; cin >> n >> m;
    map<ll,ll> mp;
    for(int i = 0; i < n; i++)
    {
    	ll x; cin >> x;
    	mp[x] = 1;
	}
	ll t; cin >> t;
	for(int i = 0; i < t; i++)
	{
		ll x; cin >> x;
		if(mp.find(x) == mp.end()) cout << 0 << ' ';
		else 
		{
			auto it = mp.lower_bound(x);
			auto cmp = mp.end();
			--cmp;
			ll x = (*it).fi;
		    if(mp.find(x) == mp.begin())
		    {
		    	++it;
		    	cout << (*it).fi << ' ';
			}
			else if(it == cmp)
			{
				--it;
				cout << (*it).fi << ' ';
			}
			else
			{
			--it;
			ll lower = (*it).fi;
			++it;++it;
			ll greater =(*it).fi;
			if(greater - x < x - lower) cout << greater << ' ';
			else cout << lower << ' ';
			}
		}
	}
}


