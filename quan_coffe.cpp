#include<bits/stdc++.h>

#define endl "\n"
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const double PI  = 3.141592653589793238463;
const ll  mod = 1e9+7;

ll _gcd(ll a, ll b) {ll r;while(b != 0) {r = a % b;a = b;b = r;}return a;}
ll _lcm(ll a, ll b) {return (a * b) / _gcd(a,b);}



int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll n; cin >> n;
    map<pair<int,int>,ll> mp;
    int h[100007], m[100007];
    for(int i = 1; i <= n; i++)
        {
        	 cin >> h[i] >> m[i];
        	 mp[make_pair(h[i],m[i])]++;
		}
    ll max = 1, res;
    for(int i = 1; i <= n; i++)
    {
    	res = mp[make_pair(h[i],m[i])];
    	if(res > max)
    	   max = res;
	}
      cout << max;
}


