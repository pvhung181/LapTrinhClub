#include<bits/stdc++.h>

#define endl "\n"
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
	return a <= b;
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t, d; cin >> t >> d;
    map<ll,ll> m;
   priority_queue<ll,vector<ll>, greater<ll>> pq;
    ll n; cin >> n;
    for(int i = 1; i <= n; i++)
    {
    	ll x; cin >> x;
    	pq.push(x);
	}
	ll i = 1;
	while(!pq.empty())
	{
		ll cnt = 0;
		while(pq.top() <= t && !pq.empty())
		{
			pq.pop();
			cnt++;
		}
		t += d;
		if(cnt) m[i] = cnt;
		i++;
	}
	ll max = m[1];
	ll bus = 1;
	for(auto it:m)
	{
		if(max < it.second)
		{
			max = it.second;
			bus = it.first;
		}
	}
	
	cout << bus;
      
}
