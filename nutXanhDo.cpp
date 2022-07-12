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

bool check(int x)
{
	return x <= 10000 && x >= 1;
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n, m; cin >> n >> m;
    queue<int> q;
    map<int,int> mp;
    q.push(n);
    mp[n] = 0;
    while(q.size())
    {
    	int x = q.front();
    	q.pop();
    	if(x == m)
    	{
    		cout << mp[x];
    		return 0;
		}
		
		int xn = x * 2;
		int xt = x - 1;
		if(check(xn) && mp.find(xn) == mp.end())
		{
			q.push(xn);
			mp[xn] = mp[x] + 1;
		}
		if(check(xt) && mp.find(xt) == mp.end())
		{
			q.push(xt);
			mp[xt] = mp[x] + 1;
		}
	}
}


