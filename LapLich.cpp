#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second
#define _fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

typedef long long ll;

bool sortBySecond(pair<ll,ll> a, pair<ll,ll> b) {
	return (a.se < b.se);
}
 
int main() {
	_fastio;
	ll n; cin >> n;
	vector<pair<ll,ll>> v(n);
	for(int i = 0; i < n; i++) {
		cin >> v[i].fi >> v[i].se;
	}
	sort(v.begin(), v.end(), sortBySecond);
//	for(int i = 0; i < n; i++) cout << v[i].fi << ' ' << v[i].se <<  endl;
	ll res = 1, e = v[0].se;
	for(int i = 1; i < n; i++) {
		if(v[i].fi > e) {
			e = v[i].se;
			res++;
		}
	}
	cout << res;
}

