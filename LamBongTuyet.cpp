#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second
#define _fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

typedef long long ll;

inline ll m(ll a, ll b) {
	return (a>b) ? b : a;
}

int main()
{
	_fastio;
	ll n; cin >> n;
	deque<ll> q;
	ll v[100005], t[100005];
	for(int i = 1 ; i <= n; i++) cin >> v[i];
	for(int i = 1 ; i <= n; i++) cin >> t[i];
	ll res, len;
	for(int i = 1; i <= n; i++) {
		res = m(v[i], t[i]);
		len = q.size();
		for(int j = 1; j <= len; j++) {
			if(q.front() > t[i]) {
				res += t[i];
				q.push_back(q.front() - t[i]);
			} 
			else res += q.front();
			q.pop_front();
		}
		if(v[i] > t[i]) q.push_back(v[i] - t[i]);
		cout << res << ' ';
	}
}


