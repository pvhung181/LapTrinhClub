#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second
#define _fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

typedef long long ll;

void sol() {
	int n; cin >> n;
	ll a[n];
	vector<ll> d0,da,dd;
	ll res = 0;
    for(int i = 0;i < n; i++) {
    	cin >> a[i];
    	if(a[i] < 0) da.push_back(a[i]);
    	else if(a[i] > 0) dd.push_back(a[i]);
    	else d0.push_back(a[i]);
	}
    
    
    if(da.size() % 2) {
    	if(d0.size()) {
    		res += d0.size();
    		for(ll x:dd) res += abs(1-x);
    		for(ll x:da) res += abs(1 - abs(x));
		} else {
			res += 2;
			for(ll x:dd) res += abs(1-x);
    		for(ll x:da) res += abs(1 - abs(x));
		}	
	} else {
		for(ll x:dd) res += abs(1-x);
    	for(ll x:da) res += abs(1 - abs(x));
    	res += d0.size();
	}
	cout << res << endl;
}

int main()
{
	_fastio;
    int t; cin >> t;
    while(t--) {
    	sol();
	}
    
}
