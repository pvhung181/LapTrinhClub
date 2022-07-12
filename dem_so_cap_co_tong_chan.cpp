#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second

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
    ll n; cin >> n;
    ll a[n];
    ll even = 0, odd = 0;
    for(int  i = 0; i < n; i++)
    {
    	cin >> a[i];
    	if(a[i] % 2 == 0) even++;
    	else odd++;
	}
	ll res = 0;
	if(even > 1) res += (even * (even - 1) / 2);
	if(odd > 1) res += (odd * (odd - 1) / 2);
	cout << res;
}


