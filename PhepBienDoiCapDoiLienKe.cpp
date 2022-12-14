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
	int n; cin >> n;
	int a[1005];
	int bf = 0, af = 0;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
		bf += a[i];
	}
	for(int i = 1; i < n; i++) {
		if(a[i] % 2) {
			a[i]++;
			a[i + 1]++;
		}
	}
	bool check = false;
	for(int i = 1; i <= n; i++) {
		if(a[i]%2) check = true;
		af += a[i];
	}
	if(check) cout << "NO";
	else cout << af - bf;
}


