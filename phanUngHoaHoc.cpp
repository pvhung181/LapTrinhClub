#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const ll  mod = 1e9+7;
const int N = 1e5 + 5;
inline ll _gcd(ll a, ll b) {ll r;while(b != 0) {r = a % b;a = b;b = r;}return a;}
inline ll _lcm(ll a, ll b) {return (a * b) / _gcd(a,b);}

vector<ll> vec[N];
ll s = 1;
void dfs (ll u,vector<ll>& unMarked)
{
	unMarked[u] = 1;
	for(int i = 0; i < vec[u].size();i++)
	{
	
		if(unMarked[vec[u][i]] == 0)	
		{
			s *= 2;
			dfs(vec[u][i],unMarked);	
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll n, m; cin >> n >> m;
    ll u, v;
    for(int i = 0; i < m; i++)
    {
    	cin >> u >> v;
    	vec[u].push_back(v);
    	vec[v].push_back(u);
	}
	ll MAX = 1;  
   for(ll i = 1; i <= n; i++)
   {
   	vector<ll> unMarked(N,0);
   	dfs(i,unMarked);
   	MAX = max(MAX,s);
   	s = 1;
   }
   cout << MAX;
}


