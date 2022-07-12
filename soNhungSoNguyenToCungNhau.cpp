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

ll sol(ll n)
{
	ll ans = n;
	for(int i = 2; i <= sqrt(n); i++) 
	     if(n % i == 0)
	    {
	    	while(n % i == 0)
	        	n /= i;
	        ans -= ans/i;
		}
	if(n != 1) ans -= ans/n;
	return ans; 
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t; cin >> t;
    while(t--)
    {
    	ll n; cin >> n;
    	cout << sol(n) << endl;
	}
}
