#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second
#define _fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

typedef long long ll;

int prime[100005] = {};

void sang() {
	prime[1] = 1;
	prime[2] = 0;
	for(ll i = 2; i <= 1000; i++) {
		if(prime[i] == 0)
	     {
	     	for(int j = i * i; j <= 1e5; j+=i)
	     	     prime[j] = 1;
		 }
	}
}

void sol() {
	ll n; cin >> n;
	for(ll i = 2; i <= sqrt(n); i++) {
	    if(n % i == 0) {
	    	if(prime[i] == 0 && prime[n/i] == 0) {
			    cout << "true";
			    return;
		    }
		}
	}
	cout << "false";
}

int main()
{
	_fastio;
	sang();
    sol();
}


