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
    set<ll,greater<ll>> s;
    ll n; cin >> n;
    ll a[n];
    for(ll &x:a) cin >> x;
    ll m;  cin >> m;
    ll b[m];
    int tmp = 0;
    for(int i = 0; i < m; i++)
    {
    	s.clear();
    	cin >> b[i]; tmp++;
    	for(int j = 0; j < n; j++)
    	    if(a[j] > b[i])
    	        s.insert(a[j]);
    	s.insert(b[i]);
        cout << s.size() << endl;    	
	}
}


