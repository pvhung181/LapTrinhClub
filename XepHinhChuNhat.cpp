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
	ll l1, l2, l3; cin >> l1 >> l2 >> l3;
	if(l1 + l2 == l3 || l1 + l3 == l2 || l2 + l3 == l1) cout << "YES";
	else cout << "NO";
}


