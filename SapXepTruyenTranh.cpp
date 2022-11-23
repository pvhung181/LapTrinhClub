#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second
#define _fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

typedef long long ll;

void sol(ll i) {
	bool check[200005] = {};
	ll n, res = 0; cin >> n;
	ll a[200005];
	for(ll i = 1; i <= n; i++) {
		cin >> a[i];
		if(!check[a[i] - 1]) {
			res++;
			check[a[i]] = true;
		}
		check[a[i]] = true;
	}
	cout << "#Case " << i <<": " << res << endl;
}

int main()
{
	_fastio;
	int t; cin >> t;
	for(int i = 1; i <= t; i++) sol(i);
}


