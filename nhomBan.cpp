#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second
#define forit(it,m) for(auto it = m.begin(); it != m.end(); it++)

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const ll  mod = 1e9+7;
const int N = 1e5 + 5;

inline ll _gcd(ll a, ll b) {ll r;while(b != 0) {r = a % b;a = b;b = r;}return a;}
inline ll _lcm(ll a, ll b) {return (a * b) / _gcd(a,b);}

    vector<ll> vec[N];
    vector<int> unMarked(N,0);
    int countP = 0;

void dfs(ll u)
{
	unMarked[u] = 1;
	countP++;
	for(int i = 0; i < vec[u].size(); i++)
		if(unMarked[vec[u][i]] == 0) dfs(vec[u][i]);
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n, m; cin >> n >> m;
    int u, v;
    for(int i  = 0; i < m; i++)
    {
    	cin >> u >> v;
    	vec[u].push_back(v);
    	vec[v].push_back(u);
	}
	int MAX = 0,countAreas = 0;
	for(int i = 1; i <= n; i++)
	{
		if(unMarked[i] == 0)
		{
			dfs(i);
			MAX = max(MAX,countP);
			countP = 0;
			countAreas++;
			
		}
	}
    cout << countAreas << endl << MAX ;
}


