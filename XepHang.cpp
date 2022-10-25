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
	ll a[n];
	map<ll,ll,greater<ll>> mp;
	for(ll &x:a) {
		cin >> x;
		mp[x]++;
	}
	auto it = mp.begin();
	cout << "1st: " << it->se << endl;
	++it;
	cout << "2nd: " << it->se << endl;
	++it;
	cout << "3rd: " << it->se << endl;
}


