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
	int n, m, x; cin >> n >> m >> x;
	int a[105][105], b[105][105];
	for(int i = 1; i <= n; i++) 
	    for(int j = 1; j <= m; j++)
	       cin >> a[i][j];
	for(int i = 1; i <= n; i++) 
	    for(int j = 1; j <= m; j++)
	       cin >> b[i][j];
	int res[105][105];
	int xa = 1, xb = 1;
	for(int i = 1; i <= n; i++) {
		int check = 1;
		xa = 1, xb = 1;
		for(int j = 1; j <= 2 * m; j++) {
			if(check == 2 * x + 1) check = 1;
			if(check <= x) {
				res[i][j] = a[i][xa++];
				check++;
			} else {
				res[i][j] = b[i][xb++];
				check++;
			}
		}
	}
	
	for(int i = 1; i <= n; i++) {
	    for(int j = 1; j <= 2 * m; j++)
	       cout << res[i][j] << ' ';
	    cout << endl;
	}
}


