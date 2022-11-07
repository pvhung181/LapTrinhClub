#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second
#define _fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

typedef long long ll;

void sol() {
	string a,b; cin >> a >> b;
    int res = 0;
    int len = a.length();
    for(int i = 0; i < len; i++) {
    	if(a[i]-'0' == b[i]-'0') continue;
    	int x = a[i]-'0',y = b[i]-'0';
    	if(x>y) swap(x,y);
    	res += min(y-x, 10+x - y);
	}
	cout << res << endl;
}

int main()
{
	_fastio;
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
    	int n; cin >> n;
    	sol();
	}
    
}

