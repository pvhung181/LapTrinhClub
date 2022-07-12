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
    ll n, m, dem = 0 ; cin >> n >> m;
    ll a[n], b[m];
    map<ll,ll> mp;
    for(ll &t:a)
    {
    	cin >> t;
    	 mp[t]++;
	}
     for(ll &t:b)
     {
     	cin >> t;
    	if(mp[t] > 0)
    	{
    		mp[t]--;
    		dem++;
		}
    } 
	cout << dem;
}


