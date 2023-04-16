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
	deque<ll> dq;
	for(int i = 0; i < n; i++) {
		ll x; cin >> x;
		dq.push_back(x);
	}
	
	while(dq.size() > 1) {
		dq.push_back(dq.front());
		dq.pop_front();
		cout << dq.front() << ' ';
		dq.pop_front();
	}
	cout << dq.front();
}

