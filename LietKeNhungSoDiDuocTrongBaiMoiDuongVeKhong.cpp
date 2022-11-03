#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second
#define _fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

typedef long long ll;

map<ll,ll> mp;
bool check[10005] = {};

struct node {
	ll data;
	vector<node*> child;
	node(ll value) {
		data = value;
		mp[value]++;
		for(ll i = 1; i <= sqrt(value); i++) {
			if(value % i == 0) {
				ll flag = ((i - 1) * (value/i + 1));
				if(!check[flag]) {
					if(flag) child.push_back(new node(flag));
					check[flag]= true;
				}
			}
		}
	}
};

int main()
{
	_fastio;
	ll n; cin >> n;
	node *root = new node(n);
	cout << 0 << ' ';
	for(auto it:mp) cout << it.fi << ' ';
}


