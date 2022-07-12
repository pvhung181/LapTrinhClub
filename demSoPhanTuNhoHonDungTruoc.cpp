#include<bits/stdc++.h>

#define endl "\n"

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
    map<ll,ll> mp;
    ll n; cin >> n;
    ll res;
    for(int i = 1; i <= n; i++)
    {
    	ll x; cin >> x;
    	mp[x]++;
    	auto tmp = mp.lower_bound(x);
    	if(tmp == mp.begin()) cout << 0 << ' ';
    	else
    	{
    		res = 0;
    		for(auto it = mp.begin(); it != tmp; it++)
    		     res += it->second;
    		cout << res << ' ';
		}
	}
}
