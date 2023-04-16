#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second
#define _fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

typedef long long ll;

inline ll max(ll a, ll b) {
	return (a < b) ? b : a;
}

int main()
{
	_fastio;
	ll n, x,s = 0, res = 0; cin >> n;
	ll end = n - 2;
	vector<ll> v;
	for(int i = 0; i < n; i++) {
		cin >> x;
		v.push_back(x);
		s += x;
	}
	sort(v.begin(), v.end(), greater<ll>());
	for(int i = 0; i+2 < n; i += 3) {
		res += max(v[i + 2], v[i]/3 + v[i + 1]/3 + v[i + 2]/3);
		end = i + 3;
	}
	for(int i = end; i < n; i++) res += v[i]/3;
	cout << s - res;
}

