#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second
#define _fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

typedef long long ll;

int n, k;

int main()
{
	_fastio;
    cin >> n >> k;
    ll max = 0;
    vector<ll>prefix;
    prefix.push_back(0);
    ll s = 0;
    for(ll i = 0; i < n; i++) {
    	ll x; cin >> x;
    	s += x;
    	prefix.push_back(s);
	}
//	for(int i = 1; i < prefix.size(); i++) cout << prefix[i] << endl;
    for(ll i = 0; i <= n - 1; i++) {
    	if(n - i<= max) {
    			cout << max ;
    			return 0;
			}
    	for(ll j = i + 1; j <= n; j++) {
    		if((prefix[j] - prefix[i]) % k == 0 && j - i > max) max = j - i;
		}
	}
	cout << max;
}


