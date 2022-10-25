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
	int a[] = {6, 8, 66, 68, 666, 668, 686,688, 866, 868, 886, 888};
	int n; cin >> n;
	for(int x : a) 
	    if(n % x == 0) {
		    cout << "YES";
		    return 0;
	    }
	cout << "NO";
}


