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
	int a[100005], sw[2] = {1, -1};
	for(int i = 1; i <= n; i++) {
		int x; cin >> x;
		a[i] = sw[x];
	}
	ll st = 1, end = 1, _st = 1;
	ll m = 0, ms = INT_MIN;
	for(int i = 1; i <= n; i++) {
		m += a[i];
		if(m > ms) {
			ms = m;
			end = i ;
			_st = st;
		}
		if(m < 0) {
			m = 0;
			st = i + 1;
		}
	}
	ll res = 0;
    for(int i = _st; i <= end; i++) a[i] *= -1;
    for(int i = 1; i <= n ; i++) 
    	if(a[i] == -1) res++;
    cout << res;
}


