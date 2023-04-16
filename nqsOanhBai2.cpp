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
	deque<ll> dq, res;
    priority_queue<ll> pq;
    ll n; cin >> n;
    for(int i = 0; i < n; i++) {
    	ll x; cin >> x;
    	pq.push(x);
	}
	while (!pq.empty()) {
        dq.push_front(pq.top());
        pq.pop();
    }
	res.push_front(dq.back());
	dq.pop_back();
	
	while(!dq.empty()) {
		res.push_front(dq.back());
		res.push_front(res.back());
		res.pop_back();
		dq.pop_back();
	}
	
	while(!res.empty()) {
		cout << res.front() << ' ';
		res.pop_front();
	}
	
}

