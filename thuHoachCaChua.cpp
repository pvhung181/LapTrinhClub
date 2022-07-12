#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second
#define forit(it,m) for(auto it = m.begin(); it != m.end(); it++)

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
	multimap<ll,ll> mp;
	ll n, k; cin >> n >> k;
	ll spoil = 0;
	ll s = 0;
	for(int i = 1; i <= n; i++)
	{
		ll x; cin >> x;
        mp.insert({x,x});
	}
	for(auto it = mp.rbegin(); it != mp.rend(); it++)
	{
		it->se -= spoil;
		if(it->se <= 0) break;
		s += it->se;
		spoil += k;
	}
	cout << s;
}
