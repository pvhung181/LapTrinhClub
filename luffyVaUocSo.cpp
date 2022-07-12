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
vector<ll> v(N,0);
ll cnt = 1;
inline ll _gcd(ll a, ll b) {ll r;while(b != 0) {r = a % b;a = b;b = r;}return a;}
inline ll _lcm(ll a, ll b) {return (a * b) / _gcd(a,b);}

void sol(ll n)
{
	for(ll i = 1; i <= sqrt(n); i++)
	{
	    if(n % i == 0)
	    {
	     if(i % 2 != 0) v[n] += i;
	     if((n/i) % 2 != 0 && i != n/i) v[n] += (n/i);
		}
    }
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    for(ll i = 1; i <= 1e5; i++)
       sol(i);
    int q; cin >> q;
    while(q--)
    {
    	ll a, b; cin >> a >> b;
    	ll s = 0;
    	for(ll i = a; i <= b; i++)
    	    s += v[i];
    	cout << s << endl;
	}
}
