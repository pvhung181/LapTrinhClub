#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second
#define _fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

typedef long long ll;

struct point {
	ll x, y;
};

int main()
{
	_fastio;
	ll n; cin >> n;
	point a[n];
	ll sum_x = 0, sum_y = 0, square_sum_x = 0, square_sum_y = 0;
	for(int i = 0; i < n; i++) {
		cin >> a[i].x >> a[i].y;
		sum_x += a[i].x;
		square_sum_x += a[i].x*a[i].x;
		sum_y += a[i].y;
		square_sum_y += a[i].y*a[i].y;
	}
	cout << (ll)(n-1)*square_sum_x  - (sum_x*sum_x) + square_sum_x + (n-1)*square_sum_y  - (sum_y*sum_y) + square_sum_y;
}

