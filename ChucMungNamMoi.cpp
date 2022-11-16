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
	fflush(stdin);
	string pattern; cin >> pattern;
	string cm = "CHUC MUNG NAM MOI";
	string sub = "---";
	int mid = n/2 + 1;
	int cnt = 1;
	for(int i = 1; i <= n; i++) {
		if(i < mid) {
			for(int k = 1; k <= (n - cnt)/2; k++) cout << sub;
			for(int k = 1; k <= cnt; k++) cout << pattern;
			for(int k = 1; k <= (n - cnt)/2; k++) cout << sub;
			cout << endl;
			cnt+= 2;		
		}
		else if(i == mid) {
			for(int j = 1; j <= 3*n - 16; j++) {
				if(j == (3*n - 17)/2 + 1) {
					cout << cm;
					continue;
				}
				cout << '-';
			}
			cnt -= 2;
			cout << endl;
		}
		else {
			for(int k = 1; k <= (n - cnt)/2; k++) cout << sub;
			for(int k = 1; k <= cnt; k++) cout << pattern;
			for(int k = 1; k <= (n - cnt)/2; k++) cout << sub;
			cout << endl;
			cnt-= 2;
		}

	}

}


