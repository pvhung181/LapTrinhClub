#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second
#define _fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

typedef  long long ll;

bool sol() {
	fflush(stdin);
	string str; cin >> str;
	int l = str.length();
	int mid = l/2;
	if(l % 2) return false;
	bool check = false;
	for(int i = 0; i < l/2; i++) {
		if(str[i] != str[mid++]) check =true;
	}
	if(check) return false;
	return true;
}

int main()
{
	_fastio;
    int t; cin >> t;
    while(t--) {
    	if(sol()) cout << "YES" << endl;
    	else cout << "NO" << endl;
	}

}

