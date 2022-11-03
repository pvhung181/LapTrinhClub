#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second
#define _fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

typedef long long ll;


vector<ll> v;
ll sol(ll n) {
	ll cnt = 0;
	while(n != 1) {
		if(n < v.size()) {
			cnt += v[n];
			return cnt;
		}
		if(n % 2) n = n*3 + 1;
		else n /= 2;
		cnt++;
	}
	return cnt;
}

int main()
{
	_fastio;
	v.push_back(0);
	v.push_back(1);
	v.push_back(2);
	for(ll i = 3; i <= 1e6; i++) v.push_back(sol(i));
    ll x,y;
    while(1) {
    	cin >> x >> y;
    	if(x == 0 && y == 0) break;
    	cout << x << ' ' << y << ' ';
    	if(x>y)swap(x,y);
    	cout << *max_element(v.begin() + x, v.begin() + y + 1) << endl;
	}
}


