#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second
#define _fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

typedef long long ll;

void sol(string s, ll k) {
	deque<int> q;
	q.push_back(s[0] - '0');
	ll len = s.length();
	for(ll i = 1; i < len; i++) {
	    while(!q.empty() && s[i] - '0' > q.back() && k != 0) {
	    	q.pop_back();
	    	k--;
		}
		q.push_back(s[i] - '0');
	}
	
	while(k != 0) {
		q.pop_back();
		k--;
		
	}
	
	while(q.size()) {
		cout << q.front();
		q.pop_front();
	}
	cout << endl;
}


int main()
{
	_fastio;
	string str; cin >> str;
	int t; cin >> t;
	while(t--) {
        ll k; cin >> k;
        sol(str, k);
	}
}


