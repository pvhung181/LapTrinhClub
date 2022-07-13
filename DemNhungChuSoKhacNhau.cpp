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

int count(ll n)
{
	ll num = n;
	bool visited[10] = {false};
	while(num)
	{
    	if(visited[num % 10]) return 0;
	    visited[num % 10] = true;
	    num /= 10;
	}
	return 1;
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	vector<ll> v;
	ll cnt = 0;
	for(ll i = 0; i <= 1e18; i++)
	{
		if(count(i)){
			cnt++;
			v.push_back(cnt);
		}
		else v.push_back(cnt);
	}
    ll t; cin >> t;
    while(t--)
    {
    	ll l, r; cin >>  l >> r;
    	ll s = v[r] - v[l];
    	if(count(l)) s++;
    	cout << s << endl;
	}
}
