#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second
#define forit(it,m) for(auto it = m.begin(); it != m.end(); it++)

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const ll  mod = 1e9+7;

inline ll _gcd(ll a, ll b) {ll r;while(b != 0) {r = a % b;a = b;b = r;}return a;}
inline ll _lcm(ll a, ll b) {return (a * b) / _gcd(a,b);}

bool cmp(ll a, ll b)
{
	return a > b;
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll n; cin >> n;
    ll seed[n + 1];
    set<ll, greater<ll>> s;
    for(ll i = 1; i <= n; i++) cin >> seed[i];
    sort(seed + 1, seed + n + 1,cmp);
    for(ll i = 1; i <= n; i++)
    	s.insert(i + seed[i]);
	cout << *s.begin() + 1;
}


