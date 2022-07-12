#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second

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
	ll x; 
	ll s = 0, min = INT_MAX, cnt = 1;
    while(cin >> x)
    {   
    	s+= x;
    	if(min > x) min = x;
    	cnt++;
	}
    if(min != 1) cout << 1;
     else cout << cnt + (cnt * (cnt - 1) / 2) - s ;
    
}


