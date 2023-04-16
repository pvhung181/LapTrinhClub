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
	ll a[n]; for(ll &x:a) cin >> x;
	stack<ll> st;
	deque<ll> dq;
	for(int i = n - 1; i >= 0; i--) {
		while(dq.size() && dq.front() <= a[i]) {
			dq.pop_front();
		}
		if(dq.size() == 0) st.push(-1);
		else st.push(dq.front());
		dq.push_front(a[i]);
	}
	while(st.size()) {
		cout << st.top() << ' ';
		st.pop();
	}
}

