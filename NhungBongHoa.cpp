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
	ll n; cin >> n;
	int check[100005] = {};
	ll ans = 0;
	vector<pair<ll,ll>> v;
	for(ll i = 0; i < n; i++) {
		ll u; cin >> u;
		v.push_back({u,i});
	} 
	sort(v.begin(), v.end());
    for(auto x:v) {
    	if(!check[x.se]) {
    		if(x.se == 0) {
    			ans++;
    			check[x.se] = check[x.se + 1] = 1;
			}
			else if (x.se == n - 1) {
				ans++;
				check[x.se] = check[x.se - 1] = 1;
			}
    		else {
    			ans++;
    			check[x.se] = check[x.se + 1] = check[x.se - 1] = 1;
			}
		}
	}
	cout << ans;
}


