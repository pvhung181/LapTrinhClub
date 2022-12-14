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
	vector<ll> v;
	ll n; cin >> n;
	ll a[100005];
	for(int i = 0; i < n; i++) cin >> a[i];
	v.push_back(a[0]);
	ll res = 0;
	for(int i = 1; i < n; i++) {
		for(auto it = v.rbegin(); it != v.rend();) {
			if(a[i] < *it) {res++; break;}
			else if(a[i] > *it) v.pop_back();
			++res; ++it;
		}	
		if(v.empty() || a[i] == v.back() || a[i] < v.back()) v.push_back(a[i]);
	}
	cout << res;
}


