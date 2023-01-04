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
	int n, k; 
	while(1) {
		cin >> n >> k;
		if(n == 0 && k == 0) break;
		int a[n];
		map<int,int>mp;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			mp[a[i]]++;
		}
		int res = 0;
		for(auto it:mp) if(it.se >= k) res++;
		cout << res << endl;
	}	
}

