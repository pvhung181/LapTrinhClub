#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second

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
    ll n; cin >> n;
    ll pos = 0, res = 0;
    map<ll,ll> m;
    for(ll i = 1; i <= n; i++)
    {
    	ll x; cin >> x;
    	if(m.find(x) == m.end() || m[x] <= pos)
    	     res = max(i - pos, res);
    	else pos = m[x];
    	m[x] = i;
	}
	cout << res;
}
