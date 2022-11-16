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
	int matrix[15][15] = {};
	int n; cin >> n;
	for(int i = 0; i < n; i++) cin >> matrix[0][i];
	for(int i = 1; i < n; i++) {
		for(int j = n - 1; j >= i; j--) {
			matrix[i][j] = matrix[i - 1][j] - matrix[i - 1][j - 1];
		} 
	}
	matrix[n-1][n] = matrix[n-1][n-1];
	for(int i = n - 2; i >= 0; i--) {
		matrix[i][n] = matrix[i][n-1] + matrix[i+1][n];
	} 
    cout << matrix[0][n];
}


