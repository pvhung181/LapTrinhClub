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
    ll n,k; cin >> n >> k;
    ll height[n];
    for(ll &x:height) cin >> x;
    sort(height, height+n);
    ll res = 1;
    for(ll i = 0; i < n - 1; i++) {
    	if(height[i + 1] - height[i] > k) res++;
	}
	cout << res;
}

