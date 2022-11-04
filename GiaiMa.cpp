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

ll sol(ll n) {
	for(int i = 1; i <= 81; i++) {
		if(n-i < 0) return -1;
		if(check(n-i, n)) return n-i;
	}
	return -1;
}

int main()
{
	_fastio;
    ll n; cin >> n;
    cout << sol(n);
}
