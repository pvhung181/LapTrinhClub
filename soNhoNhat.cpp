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
const ll N = 1e5 + 5;
inline ll _gcd(ll a, ll b) {ll r;while(b != 0) {r = a % b;a = b;b = r;}return a;}
inline ll _lcm(ll a, ll b) {return (a * b) / _gcd(a,b);}


bool check(ll n, ll k)
{
	ll res = 0;
	while(n)
	{
		res += (n % 10);
		n /= 10;
	}
	if(res == k) return 1;
	return 0;
}

void sol(ll n, ll k)
{
	for(ll i = pow(10, n - 1); i < pow(10, n); i++)
	    if(check(i,k))
	    {
	    	cout << i << endl;
	    	return ;
		}
	cout << -1 << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t; cin >> t;
    for(int i = 1; i <= t; i++)
    {
    	ll u, k; cin >> u >> k;
    	sol(u,k);
	}
}


