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
	ll pascal[45][45];
	pascal[1][1] = pascal[2][1] = pascal[2][2] = 1;
	int n; cin >> n;
	for(int i = 3; i <= n + 1; i++) {
		for(int j = 1; j <= i; j++) {
			if(j == 1) pascal[i][j] = 1;
			else if (j == i) pascal[i][j] = 1;
			else pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
		}
	}
	for(int i = 1; i <= n + 1; i++) {
		for(int j = 1; j <= i; j++) {
			cout << pascal[i][j] << ' ';
		}
		cout << endl;
	}
}


