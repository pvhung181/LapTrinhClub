#include<bits/stdc++.h>

#define endl "\n"
#define forit(it,m) for(auto it = m.begin(); it != m.end(); it++)
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const ll  mod = 1e9+7;

inline ll _gcd(ll a, ll b) {ll r;while(b != 0) {r = a % b;a = b;b = r;}return a;}
inline ll _lcm(ll a, ll b) {return (a * b) / _gcd(a,b);}
typedef struct {
	float x, y;
} toaDo;

double kc(toaDo a, toaDo b)
{
	return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll n; cin >> n;
    toaDo a[n + 1];
    double res[n + 1] = {0};
    for(ll i = 1; i <= n; i++)
        cin >> a[i].x >> a[i].y;
    for(ll i = 2; i <= n; i++)
    {
        res[i] = res[i - 1] + kc(a[i - 1],a[i]);
	}
    ll m; cin >> m;
    ll u,v;
    for(int i = 0; i < m; i++)
    {
    	cin >> u >> v;
    	cout << fixed << setprecision(3) << res[v] - res[u]<< endl;
	}
    
}
