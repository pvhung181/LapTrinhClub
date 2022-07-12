#include<bits/stdc++.h>

#define endl "\n"
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const double PI  = 3.141592653589793238463;
const ll  mod = 1e9+7;

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    set<ll> s;
    ll n, k; cin >> n >> k;
    ll a[n+1];
    ll dem = 0;
    for(ll i = 1; i <= n; i++)
    {
    	cin >> a[i];
    	if(a[i] == k) dem++;
	}
    if(!dem) cout << -1;
    else 
    {
    	for(int i = 1; i <= n; i++)
    		if(a[i] == k)
    		{
    			if(i - 1 > 0)	s.insert(i-1);
				if(i + 1 <= n) s.insert(i+1);
			}
	for(ll x:s) cout << x << ' ';
	}
}


