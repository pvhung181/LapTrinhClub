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
	string str; cin >> str;
	bool check = false;
	ll checkZero = 0, len = str.length(), ans = 0, start = 0;
	for(int i = 0; i < len; i++) 
	    if(str[i] == '1') {
		    start = i;
		    break;
	    }
	for(ll i = start + 1; i < len; i++) {
		if(str[i] == '0') {
			checkZero++;
			check = true;
		}
		if(str[i] == '1' && check) {
			ans += checkZero;
			checkZero = 0;
			check = false;
		}
	}
	cout << ans;
}


