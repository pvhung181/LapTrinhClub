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
    ll unharvested = 0;
    ll quantity = 0;
    ll *plum = new ll[n + 1];
    for(ll i = 1; i <= n; i++) cin >> plum[i];
    if(plum[1] > m) {
    	quantity = m;
    	unharvested = plum[1] - m;
	} else quantity = plum[1];
	ll remain;
	for(ll i = 2; i <= n + 1; i++) {
		remain = m;
		if(remain > unharvested) {
			remain -= unharvested;
			quantity += unharvested;
		} else {
			quantity += remain;
			unharvested = plum[i];
			continue;
		}
		
		if(remain >= plum[i]) {
			quantity += plum[i];
			unharvested = 0;
		} else {
			quantity += remain;
			unharvested = plum[i] - remain;
		}
	}
	cout << quantity;
}


