#include<bits/stdc++.h>
#define fi first
#define se second


using namespace std;

typedef long long ll;


int main() {
	vector<ll> l, r;
	ll n; cin >> n;
	ll a[n];
	for(ll &x:a) cin >> x;
	stack<pair<ll,ll>> sl, sr;
	sl.push({-1, INT_MAX});
	sr.push({-1, INT_MAX});
	for(ll i = 0; i < n; i++) {
		while(sl.top().se <= a[i]) sl.pop();
		l.push_back(sl.top().fi);
		sl.push({i, a[i]});
	}

    for(ll i = n - 1; i >= 0; i--) {
    	while(sr.top().se <= a[i]) sr.pop();
		r.push_back(sr.top().fi);
		sr.push({i, a[i]});
	}
	reverse(r.begin(), r.end());
	
	for(ll i = 0; i < n; i++) {
	    if(l[i] == -1 || r[i] == -1) cout << max(l[i], r[i]) << ' ';
	    else {
	    	if(i - l[i] > r[i] - i) cout << r[i] << ' ';
	    	else cout << l[i] << ' ';
		}
	}
}
