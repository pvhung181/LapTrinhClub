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
	ll n; cin >> n;
	ull x;
	ull tmp = 1;
	for(int i = 0; i <= 60; i++) {
		tmp = 1;
		for(int j = 1; j <= i; j++) tmp *= 2;
		if(tmp == n) break;
		if(tmp > n) {
			tmp /= 2;
			break;
		}
	}
	if(n == tmp) cout << 1;
	else cout << (n - tmp) * 2 + 1;
}

