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


int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll n, m; cin >> n >> m;
    if(n < 0) {
    	cout << "ERROR";
    	return 0;
	}
    queue<ll> q;
    q.push(n);
    map<ll,ll> mp;
    mp[n] = 0;
    while(q.size()) {
    	ll x = q.front();
    	q.pop();
		ll tmp = x - 1;
		ll tmp2 = x * 2;
		if(tmp > 0 && mp.find(tmp) == mp.end()){
			if(tmp == m) {
    		    cout << mp[x] + 1;
    		    return 0;
		    }
			q.push(tmp);
			mp[tmp] = mp[x] + 1;
		}
		if(mp.find(tmp2) == mp.end())
		{
			if(tmp2 == m) {
    		cout << mp[x] + 1;
    		return 0;
		    }
			q.push(tmp2);
			mp[tmp2] = mp[x] + 1;
		}
	}
	cout << "ERROR";
}
