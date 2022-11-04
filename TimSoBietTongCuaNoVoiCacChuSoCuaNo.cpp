#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second
#define _fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

typedef long long ll;

bool check(ll n, ll target) {
	ll res = n;
	while(n) {
		res += n%10;
		n/=10;
	}
	return target==res;
}
vector<ll> v;

void sol(ll n) {
	for(int i = 81; i > 0; i--) if(check(n-i, n)) v.push_back(n-i);
	if(!v.size()) cout << -1;
	else {
		for(ll x:v) cout << x << ' ';
	}
}

int main()
{
	_fastio;
    ll n; cin >> n;
    sol(n);
}
