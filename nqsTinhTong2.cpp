#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second
#define _fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
	_fastio;
	ll n, x; cin >> n >> x;
	map<ll,ll> mp;
	bool check[1000005] = {};
	vector<pair<ll,ll>> res;
	for(int i = 0; i < n; i++) {
		ll a; cin >> a ;
		mp[a] = 2;
	}
	
//	for(auto it : mp) cout << it.fi << ' ' << it.se << endl;

	for(auto it : mp) {
		if(mp.find(x - it.fi) != mp.end() && check[it.fi] == false && check[x - it.fi] == false) {
			if(it.fi != x - it.fi) res.push_back({min(x-it.fi, it.fi), max(x-it.fi, it.fi)});
			check[it.fi] = true;
			check[x - it.fi] = true;
		}
	}
	for(auto it : res) {
		cout << it.fi <<' ' << it.se << endl;
	}
}

