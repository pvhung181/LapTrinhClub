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

void sol()
{
	ll n; cin >> n;
	ll cnt = 0;
    	for(ll i = 2; i <= sqrt(n); i++)
		{
			 if(n % i == 0)
		      while(n % i == 0)
		    {
		    	 cnt++;
		    	 n /= i;
			}
		if(cnt) cout << i << ' ' << cnt << endl;
		cnt = 0;
		}
	if(n != 1) cout << n << ' ' << 1;
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    sol();
}
