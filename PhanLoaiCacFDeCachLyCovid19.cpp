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
	bool check[100005] = {};
	ll n, m; cin >> n >> m;
	vector<ll> vt[n + 1];
	for(int i = 1; i <= m; i++) {
		ll u, v; cin >> u >> v;
		vt[u].push_back(v);
		vt[v].push_back(u);
	}
    vector<ll> f[n];
    int k; cin >> k;
    for(int i = 1; i <= k; i++) {
    	ll x; cin >> x;
    	check[x] = true;
    	f[0].push_back(x);
	}
    for(int i = 0; i < n; i++) {
    	for(int j = 0; j < f[i].size(); j++) {
    		for(int k = 0; k < vt[f[i][j]].size(); k++) {
    			if(check[vt[f[i][j]][k]] == false) {
    				f[i + 1].push_back(vt[f[i][j]][k]);
    				check[vt[f[i][j]][k]] = true;
				}
    			
			}
		}
	}
	for(int i = 0; i < n; i++) {
		if(f[i].size() == 0) break;
		cout << 'F' << i << ": " << f[i].size() << endl;
	}
}


