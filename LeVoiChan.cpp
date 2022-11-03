#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second
#define _fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

typedef long long ll;

int main()
{
	_fastio;
	int n; cin >> n;
	ll a[n]; 
	vector<pair<ll,ll>> v; 
	ll res = 0;
	int odd = 0, even = 0;
	for(ll &x : a) {
		cin >> x;
		(x%2)?odd++:even++;
		v.push_back({even, odd});
	}
	res += even;
    int len = v.size();
    for(int i = 1; i < len; i++) if(v[i].fi >= v[i].se) res++;
    for(int i = 1; i < len - 1; i++) {
    	for(int j = i + 1; j < len; j++) {
    		if(v[j].fi - v[i - 1].fi >= v[j].se - v[i - 1].se) res++;
		}
	}
	cout << res;
}


