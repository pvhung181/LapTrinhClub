#include<bits/stdc++.h>

#define endl "\n"
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const ll  mod = 1e9+7;

inline ll _gcd(ll a, ll b) {ll r;while(b != 0) {r = a % b;a = b;b = r;}return a;}
inline ll _lcm(ll a, ll b) {return (a * b) / _gcd(a,b);}



int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    map<ll, ll> mp;
    ll n; cin >> n;
    ll a[n];
    for(ll &x : a) cin >> x;
    for(int i = 0; i < n; i++)
    {
        mp[a[i]]++;
        auto it = mp.lower_bound(a[i]);
       if(it == mp.begin())
         	cout << 0 << endl;
        else
        {
        	--it;
        	cout << (*it).first << " " << (*it).second << endl;
		}
     }
}


