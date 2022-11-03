#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second
#define _fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

typedef long long ll;

ll sol(ll x, ll y, ll s) {
	for(ll i = 1; ;i++)	if((i/x)*y + i >= s) return i;	
}

int main()
{
	_fastio;
	ll x, y, s; cin >> x >> y >> s;
	cout << sol(x,y,s);
}


