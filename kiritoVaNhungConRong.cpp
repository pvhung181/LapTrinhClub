#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second
#define forit(it,m) for(auto it : m)

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const ll  mod = 1e9+7;
const ll N = 1e5 + 5;
inline ll _gcd(ll a, ll b) {ll r;while(b != 0) {r = a % b;a = b;b = r;}return a;}
inline ll _lcm(ll a, ll b) {return (a * b) / _gcd(a,b);}


int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int s, n; cin >> s >> n;
    multiset<pair<int,int>> ms;
    for(int i = 1; i <= n; i++)
    {
    	int x, y; cin >> x >> y;
    	ms.insert({x,y});
	}
	for(auto it:ms)
	{
		if(s <= it.fi)
		{
			cout << "NO";
			return 0;
		}
		if(s > it.fi) s += it.se;
	}
	cout << "YES";
}
