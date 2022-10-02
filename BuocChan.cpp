#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second
#define _fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

typedef long long ll;

inline ll _gcd(ll a, ll b) {ll r;while(b != 0) {r = a % b;a = b;b = r;}return a;}
inline ll _lcm(ll a, ll b) {return (a * b) / _gcd(a,b);}


int main()
{
	_fastio;
	int t; cin >> t;
	for(int i = 1; i <= t; i++) {
		ll n; cin >> n;
		if(n == 1) cout << 2 << endl;
		else {
			cout << min ((n % 2) ? n / 2 + 1 : n/2, (n % 3) ? n / 3 + 1 : n / 3 ) << endl;
		}
	}
}


