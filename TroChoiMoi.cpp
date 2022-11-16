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
	int ans = 0;
	int a[] = {0,0}, arr[105];
	vector<pair<int,int>> v;
	v.push_back({0,0});
	for(int i = 1; i <= n; i++) {
		cin >> arr[i];
		a[arr[i]]++;
		v.push_back({a[0], a[1]});
	}
	int start = 0, end = 1;
	int max = 1;
	for(int i = 1; i < n; i++) {
		for(int j = i + 1; j <= n; j++) {
			int cmp =  (v[j].fi - v[i - 1].fi) - (v[j].se - v[i - 1].se);
			if(max < cmp) {
				max = cmp;
				start = i;
				end = j;
			}
		}
	}
	for(int i = start; i <= end; i++) arr[i] = abs(1-arr[i]);
	for(int i = 1; i <= n; i++) if(arr[i]) ans++;
	cout << ans;
}


