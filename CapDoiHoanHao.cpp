#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second
#define __fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

typedef long long ll;

int main() {
    __fastio;
    ll n, m; cin >> n >> m;
    ll boys[n];
    ll girls[m];
    for(ll &x : boys) cin >> x;
    for(ll &x : girls) cin >> x;
    ll pos = 0, res = 0;
    sort(boys, boys + n, greater<ll> ());
    sort(girls, girls + m, greater<ll> ());
    for(ll i = 0; i < m;) {
    	if(pos >= n) {
    		cout << res;
    		return 0;
		}
		if(boys[pos] > girls[i]) {
			res++;
			pos++;
			i++;
		} else {
			i++;
		}
	}
	cout << res;
}

