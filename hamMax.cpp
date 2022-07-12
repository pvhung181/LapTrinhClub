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

ll MAX(ll x, ll y)
{
	int cntX = 0, cntY = 0;
	while(x > 0)
	{
		cntX++;
		x /= 10;
	}
	while(y)
	{
		cntY++;
		y /= 10;
	}
	if(cntX < cntY) return cntY;
	else return cntX;
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	ll n ; cin >> n;
	ll MIN = INT_MAX;
	vector<pair<ll,ll>> v;
	for(int i = 1; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		   v.push_back({i,n/i});
	}
	for(auto x:v)
	{
		 MIN = min(MIN,MAX(x.fi,x.se));
	}
	cout << MIN;
}



