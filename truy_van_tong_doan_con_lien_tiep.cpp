#include<bits/stdc++.h>

#define endl "\n"
#define f first
#define s second
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const ll  mod = 1e9+7;

inline ll _gcd(ll a, ll b) {ll r;while(b != 0) {r = a % b;a = b;b = r;}return a;}
inline ll _lcm(ll a, ll b) {return (a * b) / _gcd(a,b);}



int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll n, m; cin >> n >> m;
    ll a[n + 1], sum[n + 1] = {};
    ll j = 1;
    ll res = 0;
    for(int i = 1; i <= n; i++)
    {
    	cin >> a[i];
    	res = res + a[i];
    	sum[j++] = res;
	}
	while(m--)
	{
		ll l, r; cin >> l >> r;
		if(l == 1) cout << sum[r] << endl;
		else cout << sum[r] - sum[l - 1] << endl;
	}
}


