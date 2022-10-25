#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second
#define _fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

typedef long long ll;

int a[3] = {6, 9, 20};
int n;
void Try(ll k, ll S) {
	if(S > n) return;
	if(S == n) {
		cout << k;
		exit(0);
	}
	for(int i = 0; i < 3; i++) {
		Try(k + 1, S + a[i]);
	}
}

int main()
{
	_fastio;
	cin >> n;
	Try(0, 0);
	cout << -1;
}


